import java.io.*;
import java.util.*;

class program562
{
    public static void main(String A[]) throws Exception
    {
        boolean bRet = false;
        File fobj = null;
        Scanner sobj = new Scanner(System.in);

        String FileName = null;

        System.out.println("Enter the FileName :");
        FileName = sobj.nextLine();

        FileWriter fwobj = new FileWriter(FileName);

        fwobj.write("Jay Ganesh...");

        fwobj.close();
        sobj.close();
    }
}