import java.util.Scanner;

class program633 {
    public static void main(String Arr[]) {
        Scanner sobj = new Scanner(System.in);

        int iValue;
        int iMask = 0x1;
        int iResult = 0;
        int iPos = 0;

        System.out.println("Enter the Number :");
        iValue = sobj.nextInt();

        System.out.println("Enter the Position :");
        iPos = sobj.nextInt();

        iMask = iMask << (iPos - 1);

        iResult = iValue & iMask;

        if (iResult == iMask) {
            System.out.println(iPos + "  Number bit is ON");
        } else {
            System.out.println(iPos + " Number bit is off");
        }

    }
}
