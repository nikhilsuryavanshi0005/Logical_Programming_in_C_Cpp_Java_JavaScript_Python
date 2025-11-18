import java.util.*;
// I have to Complete this Program
class Number
{
    public boolean CheckPerfect(int iNo)
    {
        int iCnt = 0;
        int isum = 0;

        for(iCnt = 1; (iCnt<=(iNo/2));iCnt++)
        {
            if(iNo%iCnt ==0)
            {
                System.out.println(+iCnt);
            }
        }    
    }
}
//End of Number Class

class program79
{
    public static void main(String Arr[])
    {
        int iValue = 0;

        boolean bRet = false;
 
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Number:");
        iValue = sobj.nextInt();

        Number nobj = new Number();
        bRet = nobj.CheckPerfect(iValue);
        
        if(bRet == true)
        {
            System.out.println(iValue+"is Perfeect Number");
        }
        else
        {
            System.out.println(iValue+"is not Perfeect Number");
        }
        
        sobj = null;    //Important
        nobj = null;    //Important

        System.gc();
    }
}