import java.io.*;
import java.util.*;

class program565
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
            frobj = new FileReader(FileName);

            System.out.println((char)frobj.read());
            System.out.println((char)frobj.read());
            System.out.println((char)frobj.read());
            
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