import java.util.*;

class program797
{
    public static void main( String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        int Current_Balance = 0;

        System.out.println("Please Enter Current Balance :");
        Current_Balance = sobj.nextInt();

        System.out.println("Please Enter the Amount That You want to Widthdraw Amount :");
        int WidthDraw_Amount = sobj.nextInt();

        if(Current_Balance < 0 || WidthDraw_Amount < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        if( WidthDraw_Amount %100 != 0)
        {
            System.out.println("The Widthdraw Amount Should be in Multiple of ₹100");
            return;
        }
        else if (WidthDraw_Amount > 25000)
        {
            System.out.println("Transaction Failed : Widthdraw Amount Should be less than ₹25000");
            
        }
        else if( (Current_Balance - WidthDraw_Amount) < 1000)
        {
            
            System.out.println("Transaction Failed : There Should be ₹1000 rupees remain in Account After Widthdrawal");
        }
        else
        {
            System.out.println("Widthdrawal Successful");
            System.out.println("Your Remaining Account Balance is : ₹"+(Current_Balance - WidthDraw_Amount));
        }

       
    }
}