import java.io.*;
import java.util.*;

class program605
{
    public static void main(String A[]) throws Exception
    {
        //Header formation
        String Header = null;
        int iRet = 0;

        byte Buffer[] = new byte[1024];

        byte bHeader[] = new byte[100];

        int i = 0;
        int j = 0;
      

       
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Directory name :");
        String FolderName = sobj.nextLine();
        
        System.out.println("Enter the Directory name :");
        String PackName = sobj.nextLine();

        File fobj = new File(FolderName);

        if((fobj.exists()) && (fobj.isDirectory()))
        {
            byte Key = 0x11;

            File Packobj = new File(PackName);

            Packobj.createNewFile();

            System.out.println("Directory Already Exists");
            File fArr[] = fobj.listFiles();
            System.out.println("Number of File in Folder are :"+fArr.length);

            FileOutputStream foobj = new FileOutputStream(Packobj);
            FileInputStream fiobj = null;

            for( i =0; i<fArr.length; i++)
            {
                fiobj = new FileInputStream(fArr[i]);
                //System.out.println("File Name : "+fArr[i].getName() + " Size :"+fArr[i].length()+" bytes");
               
                
                if(fArr[i].getName().endsWith(".txt"))
                {
                    //Header formation
                    Header = fArr[i].getName()+" "+fArr[i].length()+" ";
                    String HeaderArr[] = Header.split(" ");
                    System.out.println(Header);

                    for(j = 0; j < HeaderArr.length; j++)
                    {
                        Header = Header + " ";
                    }

                    bHeader = Header.getBytes();
                    foobj.write(bHeader,0,bHeader.length);
                    System.out.println("Header : " +Header+" Length : "+Header.length());

                     /*while((iRet = fiobj.read(Buffer)) != -1)
                    {
                        for(j =0; j<iRet; j++)
                        {
                            Buffer[j] = (byte)(Buffer[j] ^ Key);
                        }
                        foobj.write(Buffer,0,iRet);
                    }*/
                    
                }
               
               fiobj.close();
               
                
            }
            foobj.close();
        }
        else
        {
           
            System.out.println("There is No Such Directory");
        }
        
    }
}