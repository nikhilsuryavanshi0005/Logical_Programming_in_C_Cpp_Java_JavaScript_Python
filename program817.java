import java.util.*;

class program817 {

    public static boolean CheckStrong(int No) {
        int iFact = 0, i = 0, iTemp = 0, iSum = 0;
        int iDigit = 0;

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
            return true;
        } else {
            return false;
        }
    }

    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;

        System.out.println("Enter the Number :");
        iNo = sobj.nextInt();

        boolean iRet = false;

        iRet = CheckStrong(iNo);

        if (iRet == true) {
            System.out.println(iNo + " is Strong Number......");
        } else {
            System.out.println(iNo + " is Not Stroong Number....");
        }

    }

}