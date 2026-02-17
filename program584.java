import java.io.*;
import java.util.*;

class program584
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
            for(int i =0; i<fArr.length; i++)
            {
                System.out.println("File Name : "+fArr[i].getName() + " Size :"+fArr[i].length()+" bytes");
               
                
            }
        }
        else
        {
           
            System.out.println("There is No Such Directory");
        }
        
    }
}