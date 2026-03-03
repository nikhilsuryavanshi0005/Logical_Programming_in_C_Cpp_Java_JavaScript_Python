import java.util.Scanner;

class program630 {
    public static void main(String Arr[]) {
        Scanner sobj = new Scanner(System.in);

        int iValue;
        int iMask = 0x02000000;
        int iResult = 0;

        System.out.println("Enter the Number :");
        iValue = sobj.nextInt();

        iResult = iValue & iMask;

        if (iResult == iMask) {
            System.out.println("26th bit is ON");
        } else {
            System.out.println("26th bit is off");
        }

    }
}
