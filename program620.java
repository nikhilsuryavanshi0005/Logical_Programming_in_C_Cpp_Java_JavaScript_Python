import java.util.Scanner;

class program620 {
    public static void main(String Arr[]) {
        Scanner sobj = new Scanner(System.in);

        int iValue;
        int iDigit;
        int iCount = 0;

        System.out.println("Enter the Number :");
        iValue = sobj.nextInt();

        while (iValue != 0) {
            iDigit = iValue % 2;
            System.out.printf(iDigit);

            if (iDigit == 1) {
                iCount++;
            }
            iValue = iValue / 2;

        }
        System.out.println(iCount);

    }
}
