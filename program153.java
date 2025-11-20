//input : 5
//output : 1    2   3   4   5

import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1;iCnt<=iNo;iCnt++)
        {
            System.out.print(iCnt+"\t");
        }

        System.out.println();
    }
}
class program153 
{
    public static void main(String Arr[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number :");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);
    }
    
}