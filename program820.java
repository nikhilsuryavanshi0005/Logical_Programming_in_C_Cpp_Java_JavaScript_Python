import java.util.*;

class program820 {
    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        int Num = 0,iDigit = 0,iTemp = 0;

        System.out.println("Enter Number :");
        Num = sobj.nextInt();

        int iCount = 0;

        while(Num != 0)
        {
            iDigit = Num%10;
            iCount++;

            Num = Num /10;
        }

        System.out.println(iCount);

    }

}