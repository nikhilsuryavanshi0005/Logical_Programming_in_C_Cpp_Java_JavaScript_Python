import java.util.*;

class Number
{
    public int CalculateFactorial(int iNo)
    {
        int i = 0;
        int iFact = 1;
        
        for(i=1; i <= iNo; i++)
        {
            iFact = iFact * i;
        }

        return iFact;
    }
}
//End of Number Class

class program86
{
    public static void main(String Arr[])
    {
        int iValue = 0;
        int iRet = 0;
 
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Number:");
        iValue = sobj.nextInt();

        Number nobj = new Number();
        iRet = nobj.CalculateFactorial(iValue);
        
        System.out.println("Factorial is :"+iRet);
        
        sobj = null;    //Important
        nobj = null;    //Important

        System.gc();
    }
}