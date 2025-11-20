//input : 6
//output : -6    -5   -4   -3   -2   -1     0

import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = -iNo;iCnt<=0;iCnt++)
        {
            System.out.print(iCnt+"\t");
        }

        System.out.println();
    }
}


class program158 
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