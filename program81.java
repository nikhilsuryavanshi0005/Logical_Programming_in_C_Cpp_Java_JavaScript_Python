import java.util.*;

class Number
{
    public boolean CheckPerfect(int iNo)
    {
        int iCnt = 0;
        int isum = 0;

        if(iNo<0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt<=(iNo/2);iCnt++)
        {
            if(iNo%iCnt ==0)
            {
                isum = isum +iNo;
            }
        }  
        if(isum == iNo)
        {
            return true;
        }  
        else
        {
            return false;
        }
    }
}
//End of Number Class

class program81
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
            System.out.println(iValue+"is Perfect Number");
        }
        else
        {
            System.out.println(iValue+"is not Perfect Number");
        }
        
        sobj = null;    //Important
        nobj = null;    //Important

        System.gc();
    }
}