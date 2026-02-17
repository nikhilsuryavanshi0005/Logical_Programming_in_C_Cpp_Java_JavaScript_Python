import java.io.*;
import java.util.*;

class program558
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        String FileName = null;

        System.out.println("Enter the FileName :");
        FileName = sobj.nextLine();

        File fobj = new File(FileName);

        boolean bRet = fobj.createNewFile();

        if(bRet == true)
        {
            System.out.println("File gets Created Successfully");
        }
        else
        {
            System.out.println("Unable to Created File");
        }

        sobj.close();
    }
}