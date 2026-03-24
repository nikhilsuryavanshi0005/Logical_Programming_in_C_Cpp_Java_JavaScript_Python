import java.util.*;

class program836 {
    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        int Num = 0;
        int iCount = 0;
        int iTemp = 0;
        int iDigits = 0;
        int iSum = 0;


        System.out.println("Enter Number :");
        Num = sobj.nextInt();


        iTemp =Num;

        while(Num != 0)
        {
            iDigits = Num % 10;
            iCount++;
            Num = Num /10;
        }

        Num = iTemp;
        while(Num != 0)
        {

            iDigits = Num % 10;
            iSum  = iSum + ((int)Math.pow(iDigits, iCount));
            

            Num = Num/10;
            iCount--;
        }

        if(iSum == iTemp)
        {
            System.out.println(iTemp+" It is  Discarium Number.....");
        }
        else
        {
            System.out.println(iTemp+" It is Not  Discarium Number.....");
        }
        

        

       
    }

}