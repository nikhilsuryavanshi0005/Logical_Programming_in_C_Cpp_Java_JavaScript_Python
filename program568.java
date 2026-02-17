import java.io.*;
import java.util.*;

class program568
{
    public static void main(String A[]) throws Exception
    {
        boolean bRet = false;
        File fobj = null;
        Scanner sobj = new Scanner(System.in);
        FileReader frobj = null;
        String FileName = null;

        System.out.println("Enter the FileName :");
        FileName = sobj.nextLine();

        fobj = new File(FileName);
        if(fobj.exists())
        {
           System.out.println("File Name : "+fobj.getName());
           System.out.println("File Path : "+fobj.getAbsolutePath());
            System.out.println("File Size : "+fobj.length());
        }
        else
        {
            System.out.println("There is No Such File");
        }

        if(frobj != null)
        {
            frobj.close();
        }

        
        sobj.close();
    }
}