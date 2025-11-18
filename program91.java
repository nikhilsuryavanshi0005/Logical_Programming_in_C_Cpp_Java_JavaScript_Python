import java.util.*;

class Digit
{
    public int SumDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo %10;
            iSum = iSum + iDigit;
            iDigit = iNo/10;
        }
        return iSum;
    }

}

class program91
{
    public static void main(String Arr[])
    {
        int iValue = 0;
        int iRet = 0;
 
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Number:");
        iValue = sobj.nextInt();

        Digit dobj = new Digit();
        iRet = dobj.SumDigits(iValue);
        
        System.out.println("Sum is :"+iRet);
    
        
        sobj = null;    //Important
        dobj = null;    //Important

        System.gc();
    }
}