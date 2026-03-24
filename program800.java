import java.util.*;



class program800
{
    public static void main( String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        int Purchase_Amount = 0;
        String MemberShip_Type = null;

        float Final_Amount = 0.0f;

        float Discount = 0.0f;

        

        System.out.println("Enter the Purchase Amount :");
        Purchase_Amount = sobj.nextInt();

        System.out.println("Enter your MemberShip : (Premium / Regular) ");
        MemberShip_Type = sobj.next();


        if((Purchase_Amount <= 0) || ((MemberShip_Type.equalsIgnoreCase("Premium")==false) &&(MemberShip_Type.equalsIgnoreCase("Regular")==false)) )
        {
            System.out.println("Invalid Input");
            return;
        }

        if(Purchase_Amount > 5000)
        {
            Discount = Purchase_Amount * 0.2f;

        }
        else if(Purchase_Amount > 2000)
        {
            Discount = Purchase_Amount * 0.1f;
        }
        else
        {
            Discount = 0.0f;
        }

        Final_Amount = Purchase_Amount - Discount;

        if(MemberShip_Type.equalsIgnoreCase("Premium"))
        {
            Discount = Discount + (Final_Amount * 0.05f);
            Final_Amount = Purchase_Amount - Discount;
        }

       
        System.out.println("Original Amount is :₹"+Purchase_Amount);

        System.out.println("Final Amount to be Paid is :₹"+Final_Amount);
        System.out.println("You have Saved :₹"+Discount);

    }

   
}