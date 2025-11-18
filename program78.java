import java.util.*;

class Number
{
    public void DisplayFactors(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt<=iNo/2;iCnt++)
        {
            if(iNo%iCnt ==0)
            {
                System.out.println(+iCnt);
            }
        }
    }
}
//End of Number Class

class program78
{
    public static void main(String Arr[])
    {
        int iValue = 0;
 
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Number:");
        iValue = sobj.nextInt();

        Number nobj = new Number();
        nobj.DisplayFactors(iValue);
        
        sobj = null;    //Important
        nobj = null;    //Important

        System.gc();
    }
}