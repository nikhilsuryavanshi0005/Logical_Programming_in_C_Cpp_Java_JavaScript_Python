import java.util.*;

class program816 {
    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        int No = 0, iFact = 0, i = 0, iTemp = 0, iSum = 0;
        int iDigit = 0;

        System.out.println("Enter the Number :");
        No = sobj.nextInt();

        iTemp = No;

        while (No != 0) {
            iDigit = No % 10;

            // logic
            for (iFact = 1, i = 1; i <= iDigit; i++) {
                iFact = iFact * i;
            }

            iSum = iSum + iFact;

            No = No / 10;
        }

        if (iSum == iTemp) {
            System.out.println("It is Strong Number.....");
        } else {
            System.out.println("It is Not Strong Number......");
        }

    }

}