import java.io.*;
import java.util.*;

class program578
{
    public static void main(String A[]) throws Exception
    {
       
        Scanner sobj = new Scanner(System.in);

        File fobj = new File("Marvellous1");

        if(fobj.exists())
        {
            System.out.println("Directory Already Exists");
        }
        else
        {
            
            System.out.println("There is No Such Directory");
        }
        
    }
}