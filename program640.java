/*

    iPos1 = 2
    iPos2 = 4

    iValue = 0  1   1    0
    iMask1 = 0  0   1    0
    iMask2 = 1  0   0    0

    iMask = iMask1 ^ iMask2

    0   0   1  0
    1   0   0  0
    -------------
    1   0   1  0    iMask

    iValue = iValue ^ iMask2
    0   1   1   0
    1   0   1   0   ^
    --------------
    1   1   0   0   iValue
 */

import java.util.Scanner;

class program640 {

    public static void main(String Arr[]) {
        Scanner sobj = new Scanner(System.in);

       int iValue;
       int iMask = 0;
       int iMask1 = 0;
       int iMask2 = 0;

       System.out.println("Enter Number : ");
       iValue = sobj.nextInt();

       iMask1 = 0x00000002;
       iMask2 = 0x00000008;

       iMask = iMask1 | iMask2;

       iValue = iValue ^ iMask;

       System.out.println("Updated Number : "+iValue);
    }
}
