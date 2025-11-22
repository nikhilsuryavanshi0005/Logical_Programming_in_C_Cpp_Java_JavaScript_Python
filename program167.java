/*
iRow : 4
iCol : 4
    1   1   1   1
    2   2   2   2
    3   3   3   3
    4   4   4   4
    
*/

import java.util.Scanner;

class Pattern
{
    void Display(int iRow,int iCol)
    {
        int i = 0;
        int j = 0;

        for(i=1;i<=iRow;i++)
        {
            for(j=1;j<=iCol;j++)
            {
                System.out.print(i+"\t");
            }
            System.out.println();
        }
    }
}

class program167
{
    public static void main(String Arr[])
    {
        int iValue1 = 0;
        int iValue2 = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Rows:");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the Number of Columns:");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1,iValue2);
        

    }    
}