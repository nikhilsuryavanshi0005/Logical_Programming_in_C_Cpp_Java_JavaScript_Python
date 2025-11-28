//Hello
//H    e    l   l   o

import java.util.*;

public class program243
{
    public static void main(String A[]) 
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter String :");
        String str = sobj.nextLine();

        for(iCnt = 0; iCnt <=str.length(); iCnt++)      //Method Call
        {
            System.out.print("\t"+str.charAt(iCnt));
        }
        
       


    }
    
}
