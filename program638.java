import java.util.Scanner;
// toggle
// iPos = 5
// iMask = 1
// iNo =    0000    0000    0000    0000    0000    0000    0100    1101   
// iMask =  0000    0000    0000    0000    0000    0000    0001    0000     ^
//--------------------------------------------------------------------------
// iValue = 0000    0000    0000    0000    0000    0000    0101    1101


// iNo =    0000    0000    0000    0000    0000    0000    0101    1101   
// iMask =  0000    0000    0000    0000    0000    0000    0001    0000     ^
//--------------------------------------------------------------------------
// iValue = 0000    0000    0000    0000    0000    0000    0100    1101


class program638 {

    public static void main(String Arr[]) {
        Scanner sobj = new Scanner(System.in);

        int iValue;
        int iMask = 0x1;
        int iPos; 
        
        System.out.println("Enter the Number :");
        iValue = sobj.nextInt();

        System.out.println("Enter the Position :");
        iPos = sobj.nextInt();

        iMask = iMask << (iPos - 1);

        iValue = iValue ^ iMask;

        System.out.println("Updated Number :"+iValue); 

    }
}
