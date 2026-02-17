import java.io.*;
import java.util.*;

class program569
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
            FileOutputStream foobj = new FileOutputStream(fobj);
            String str = "Jay Ganesh...";

            foobj.write(str);   //Error
        }
        else
        {
            System.out.println("There is No Such File");
        }

    
        sobj.close();
    }
}