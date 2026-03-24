import java.util.*;

class program833 {
    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        
        int Num = 0;
        int iTemp = 0;
        int Product = 0;
        int iDigit =0;
        int iSum =0;
        
        int iCount = 0;

        System.out.println("Enter Number :");
        Num = sobj.nextInt();

        iTemp = Num;
        

        Product = 1;

        while(Num != 0)
        {
            iDigit = Num %10;
            iSum  = iSum + iDigit;
            Product = Product * iDigit;
            iCount++;
            Num = Num /10;

        }

        if( iSum == Product )
        {
            System.out.println(iTemp+" is Spy Number......");
        } 
        else
        {
            System.out.println(iTemp+" is Not a Spy Number.....");
        }

       
    }

}