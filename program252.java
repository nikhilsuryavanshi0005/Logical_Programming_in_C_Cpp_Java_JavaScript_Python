
import java.util.*;

class StringX
{
    public String Update(String str)
    {
        char Arr[] = str.toCharArray();
        Arr[0] = '_';

        String temp = new String(Arr);
        return temp;
    }
}
public class program252
{
    public static void main(String A[]) 
    {
        
        Scanner scanobj = new Scanner(System.in);

        String sRet = null;
        
        System.out.println("Enter String :");
        
        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();

        sRet = strobj.Update(sobj);

        System.out.println("The Updated String is :"+sRet);
       


    }
    
}
