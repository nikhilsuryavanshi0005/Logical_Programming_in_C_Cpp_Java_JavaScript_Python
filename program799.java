import java.util.*;

class program799
{
    public static void main( String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        int Units = 0;
        int Amount = 0;

        System.out.println("Enter the Number of Consumer of Electricity :");
        Units = sobj.nextInt();

        if(Units < 0)
        {
            System.out.println(" Entered Invalid Number of Unit : Units can not be Negative");
            return;
        }

        if(Units <= 100)
        {
            Amount = 5 * Units;
        }
        else if(Units >100 && Units <= 200)
        {
            Amount = (7 * (Units-100)) + 500;
        }
        else if(Units > 200)
        {
            Amount = (10 * (Units - 200)) + 1200;
        }

        System.out.println("Total Number of Units Consumed :"+Units);
        System.out.println("The Amount due for Units is :"+Amount);
    }

   
}