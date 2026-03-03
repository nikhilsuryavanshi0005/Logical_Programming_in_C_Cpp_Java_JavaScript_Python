import java.util.Scanner;

class program622 {
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
/*
 * 
 * Decimal HexaDecimal Binary
 * 
 * 0        0 0000
 * 1        1 0001
 * 2        2 0010
 * 3        3 0011
 * 4        4 0100
 * 5        5 0101
 * 6        6 0110
 * 7        7 0111
 * 8        8 1000
 * 9        9 1001
 * 10       a 1010
 * 11       b 1011
 * 12       c 1100
 * 13       d 1101
 * 14       e 1110
 * 15       f 1111
 */