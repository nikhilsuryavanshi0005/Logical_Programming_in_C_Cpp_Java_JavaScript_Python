
//UnPacking Code..
import java.io.*;
import java.util.*;

class program608
{
    public static void main(String A[]) throws Exception
    {
        // Variable Creation
        Scanner sobj = null;
        String FileName = null;
        String Header = null;
        File fpackobj = null;
        FileInputStream fiobj = null;
        byte bHeader[] = new byte[100];


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

        System.out.println("Header is : "+Header);


    }

}