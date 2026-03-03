import java.util.Scanner;

class program624 {
    public static void main(String Arr[]) {
        Scanner sobj = new Scanner(System.in);

        int iValue;
        int iMask = 4;
        int iResult = 0;

        System.out.println("Enter the Number :");
        iValue = sobj.nextInt();

        iResult = iValue & iMask;

        if (iResult == iMask) {
            System.out.println("3rd bit is ON");
        } else {
            System.out.println("3rd bit is off");
        }

    }
}
