/*
input : 5
output : a  b   c   d   e
ASCII : 97  98  99 100 101

    
*/

import java.util.Scanner;

class Pattern
{
    void Display(int iNo)
    {
        int iCnt = 0;
        
        char  ch = 'a';

        for(iCnt=1;iCnt<=iNo;iCnt++,ch++)
        {
            System.out.print(ch+"\t");
               
        }
        System.out.println();
    }
}
 
class program175
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