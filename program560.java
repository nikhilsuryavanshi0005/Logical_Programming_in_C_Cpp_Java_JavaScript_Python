import java.io.*;
import java.util.*;

class program560
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
            fobj.delete();
            System.out.println("File Gets Deleted..........");
        }
        else
        {
            System.out.println("There is No such File");
        }
       

        sobj.close();
    }
}