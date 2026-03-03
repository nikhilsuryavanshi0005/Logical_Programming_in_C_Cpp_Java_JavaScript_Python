import java.util.Scanner;

class program628 {
    public static void main(String Arr[]) {
        Scanner sobj = new Scanner(System.in);

        int iValue;
        int iMask = 0x00000080;
        int iResult = 0;

        System.out.println("Enter the Number :");
        iValue = sobj.nextInt();

        iResult = iValue & iMask;

        if (iResult == iMask) {
            System.out.println("8rd bit is ON");
        } else {
            System.out.println("8rd bit is off");
        }

    }
}
