import java.util.*;

class program831 {
    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        
        int Num = 0;
        int iTemp = 0;
        int iSum = 0;
        int iDigit = 0;

        System.out.println("Enter Number :");
        Num = sobj.nextInt();

        iTemp = Num;
        Num = Num * Num;

        

        while(Num != 0)
        {
            iDigit=  Num %10;

            iSum = iSum + iDigit;

            Num = Num /10;

        }

        if(iSum == iTemp )
        {
            System.out.println(iSum+" is Neon Number......");
        } 
        else
        {
            System.out.println(iSum+" is Not a Neon  Number.....");
        }

       
    }

}