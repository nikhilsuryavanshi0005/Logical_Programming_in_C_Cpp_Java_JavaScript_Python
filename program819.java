import java.util.*;

class program819 {

    public static boolean CheckStrong(int No) {
        int iTemp = 0, iSum = 0;
        int iDigit = 0;

        // 0 1 2 3 4 5 6 7 8 9
        int FactArr[] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880 };
        iTemp = No;
        while (No != 0) {
            iDigit = No % 10;

            // logic

            iSum = iSum + FactArr[iDigit];

            No = No / 10;
        }

        return (iSum == iTemp);

    }

    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;

        System.out.println("Enter the Number :");
        iNo = sobj.nextInt();

        boolean iRet = false;

        iRet = CheckStrong(iNo);

        if (iRet) {
            System.out.println(iNo + " is Strong Number......");
        } else {
            System.out.println(iNo + " is Not Stroong Number....");
        }

    }

}