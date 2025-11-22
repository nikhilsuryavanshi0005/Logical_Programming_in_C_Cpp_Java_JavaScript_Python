/*
input : 5
output : A  B   C   D   E
ASCII : 65  66  67 68 69

    
*/

import java.util.Scanner;

class Pattern
{
    void Display(int iNo)
    {
        int iCnt = 0;
        
        char  ch = 'A';

        for(iCnt=1;iCnt<=iNo;iCnt++,ch++)
        {
            System.out.print(ch+"\t");
               
        }
        System.out.println();
    }
}
 
class program176
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