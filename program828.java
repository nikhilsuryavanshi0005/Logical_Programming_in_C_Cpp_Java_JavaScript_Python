import java.util.*;

class program828 {
    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        
        int Num = 0;
        int iTemp = 0;
        int iDigit = 0;
        int iSum =0;

        System.out.println("Enter Number :");
        Num = sobj.nextInt();

        iTemp = Num;
        while(Num != 0)
        {
            iDigit = Num %10;

            iSum = iSum + iDigit;

            Num = Num /10;

        }
        

        if(iTemp % iSum == 0)
        {
            System.out.println("It is Harshad/Niven Number.....");
        }
        else
        {
            System.out.println("It is  Not Harshad Number.....");
        }
    }

}