
import java.util.*;

class StringX
{
    public int CountSmall(String str)
    {
        int iCnt = 0;
        int iCount = 0;
        
        char Arr[] = str.toCharArray();

        for(iCnt =0; iCnt< Arr.length;iCnt++)
        {
            if(Arr[iCnt] >='a'&& Arr[iCnt]<='z')
            {
                iCount++;
            }

        }
        return iCount;
    }
}
public class program250
{
    public static void main(String A[]) 
    {
        
        Scanner scanobj = new Scanner(System.in);

        int iRet = 0;
        
        System.out.println("Enter String :");
        
        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();

        iRet = strobj.CountSmall(sobj);

        System.out.println("The count of Small character is :"+iRet);
       


    }
    
}
