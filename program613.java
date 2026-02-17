
//UnPacking Code..
import java.io.*;
import java.util.*;

class program613
{
    public static void main(String A[]) throws Exception
    {
        // Variable Creation
        int FileSize = 0;
        int i =0;
        byte Key = 0X11;
        Scanner sobj = null;
        String FileName = null;
        String Header = null;
        String Tokens[] = null;
        File fpackobj = null;
        FileInputStream fiobj = null;
        FileOutputStream foobj = null;
        byte bHeader[] = new byte[100];
        byte Buffer[] = null;
        File fobj = null;
        
        sobj = new Scanner(System.in);

        System.out.println("Enter the Name of Packed File :");
        FileName = sobj.nextLine();

        fpackobj = new File(FileName);     //open the file and check the file

        if(fpackobj.exists() == false)
        {
            System.out.println("Error : There is no such packed file");
            return;
        }

        fiobj = new FileInputStream(fpackobj);

        fiobj.read(bHeader,0,100);

        Header= new String(bHeader);

        Header = Header.trim();

        Tokens = Header.split(" ");

        System.out.println("File Name : "+Tokens[0]);
        System.out.println("File Size : "+Tokens[1]);
        
        fobj = new File(Tokens[0]);

        fobj.createNewFile();

        foobj = new FileOutputStream(fobj);

        FileSize = Integer.parseInt(Tokens[1]);

        //Buffer for read the Data
        Buffer = new byte[FileSize];

        //Read from the Packed file
        fiobj.read(Buffer,0,FileSize);

        //Decrpyt the Data
        for(i=0;i<FileSize;i++)
        {
            Buffer[i] = (byte)(Buffer[i] ^ Key);
        }
        

        //Write into the Extracted File
        foobj.write(Buffer,0,FileSize);

        foobj.close();
        fiobj.close();

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

        fiobj.read(bHeader,0,100);

        Header= new String(bHeader);

        Header = Header.trim();

        Tokens = Header.split(" ");

        System.out.println("File Name : "+Tokens[0]);
        System.out.println("File Size : "+Tokens[1]);
        
        fobj = new File(Tokens[0]);

        fobj.createNewFile();

        foobj = new FileOutputStream(fobj);

        FileSize = Integer.parseInt(Tokens[1]);

        //Buffer for read the Data
        Buffer = new byte[FileSize];

        //Read from the Packed file
        fiobj.read(Buffer,0,FileSize);

        //Decrpyt the Data
        for(i=0;i<FileSize;i++)
        {
            Buffer[i] = (byte)(Buffer[i] ^ Key);
        }
        

        //Write into the Extracted File
        foobj.write(Buffer,0,FileSize);

        foobj.close();
        fiobj.close();

    }

}