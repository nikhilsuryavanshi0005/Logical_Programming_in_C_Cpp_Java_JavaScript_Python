import java.io.*;
import java.util.*;

class program582
{
    public static void main(String A[]) throws Exception
    {
       
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Directory name :");
        String FolderName = sobj.nextLine();
        
        File fobj = new File(FolderName);



        if((fobj.exists()) && (fobj.isDirectory()))
        {
            System.out.println("Directory Already Exists");
            File fArr[] = fobj.listFiles();
            System.out.println("Number of File in Folder are :"+fArr.length);
        }
        else
        {
           
            System.out.println("There is No Such Directory");
        }
        
    }
}