/*
input : 8
output : 1  A   3   B   5   C    7    C

    
*/

import java.util.Scanner;

class Pattern
{
    void Display(int iNo)
    {
        int iCnt = 0;
        
        char  ch = 'A';

        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            if(iCnt%2==0)
            {
                System.out.print(ch+"\t");
                ch++;
            }
            else
            {
                System.out.print(iCnt+"\t");
            }
               
        }
        System.out.println();
    }
}
 
class program177
{
    public static void main(String Arr[])
    {
        int iValue = 0;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Frequency:");
        iValue = sobj.nextInt();

        
        Pattern pobj = new Pattern();

        pobj.Display(iValue);
        

    }    
}