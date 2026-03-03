import java.util.Scanner;

class program619 {
    public static void main(String Arr[]) {
        Scanner sobj = new Scanner(System.in);

        int iValue;
        int iDigit;

        System.out.println("Enter the Number :");
        iValue = sobj.nextInt();

        while (iValue != 0) {
            iDigit = iValue % 2;
            System.out.printf("%d", iDigit);
            iValue = iValue / 2;

        }
    }
}
