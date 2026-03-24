import java.util.*;

class program796
{
    public static void main( String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        int iDays = 0;
        int Fine = 0;

        System.out.println("Enter the Number of Days:");
        iDays = sobj.nextInt(); 

        if( iDays < 0)
        {
            System.out.println("Invalid input");
            return;
        }


        if(iDays <= 7)
        {
            System.out.println("There is No any Fine");
            return;
        }
        else if(iDays >= 8 && iDays <= 12)
        {
            Fine = 5 * (iDays - 7);
            
        }
        else if(iDays > 12)
        {
            Fine = (10 * (iDays - 12)) + 25;
            
        }
        System.out.println(" You have to pay Fine of Rupees :"+Fine);
    }
}