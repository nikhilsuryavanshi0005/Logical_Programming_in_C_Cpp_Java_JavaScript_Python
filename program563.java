import java.io.*;
import java.util.*;

class program563
{
    public static void main(String A[]) throws Exception
    {
        boolean bRet = false;
        File fobj = null;
        Scanner sobj = new Scanner(System.in);

        String FileName = null;

        System.out.println("Enter the FileName :");
        FileName = sobj.nextLine();

        FileReader fwobj = new FileReader(FileName);

       

        fwobj.close();
        sobj.close();
    }
}