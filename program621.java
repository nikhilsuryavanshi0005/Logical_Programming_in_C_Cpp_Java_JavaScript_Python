import java.util.Scanner;

class program621 {
    public static void main(String Arr[]) {
        Scanner sobj = new Scanner(System.in);

        int iValue;
        int iDigit;
        int iCount = 0;

        System.out.println("Enter the Number :");
        iValue = sobj.nextInt();

        while (iValue != 0) {
            iDigit = iValue % 2;
            System.out.println(iDigit);

            iCount = iCount + iDigit;

            iValue = iValue / 2;

        }
        System.out.println(iCount);

    }
}
