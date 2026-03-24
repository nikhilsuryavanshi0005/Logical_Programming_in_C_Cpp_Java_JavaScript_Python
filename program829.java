import java.util.*;

class program829 {
    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        
        int Num = 0;
        int iTemp = 0;
        int iRev = 0;
        int iDigit = 0;

        System.out.println("Enter Number :");
        Num = sobj.nextInt();

        iTemp = Num;
        while(Num != 0)
        {
            iDigit=  Num %10;

            iRev = iRev * 10 + iDigit;

            Num = Num /10;

        }

        System.out.println(iRev);

       
    }

}