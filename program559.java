import java.io.*;
import java.util.*;

class program559
{
    public static void main(String A[]) throws Exception
    {
        boolean bRet = false;
        File fobj = null;
        Scanner sobj = new Scanner(System.in);

        String FileName = null;

        System.out.println("Enter the FileName :");
        FileName = sobj.nextLine();

        fobj = new File(FileName);

        bRet = fobj.exists();

        if(bRet == true)
        {
            System.out.println("File is already Present");
        }
        else
        {
            bRet = fobj.createNewFile();

             if(bRet == true)
            {
                System.out.println("File gets Created Successfully");
            }
            else
            {
                System.out.println("Unable to Created File");
            }
        }

       

       

        sobj.close();
    }
}