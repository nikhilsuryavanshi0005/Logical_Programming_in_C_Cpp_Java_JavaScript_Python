import java.util.Scanner;

// iPos = 14
//iMask = 1
//  0000    0000    0000    0000    0000    0000    0000    0001
//  iMask = iMask << (iPos-1);
//iMask = 1
//  0000    0000    0000    0000    0010    0000    0000    0000
//iMask = ~iMask
//  1111    1111    1111    1111    1101    1111    1111    1111

class program637 {
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

        iMask = ~iMask;
        
        iValue = iValue & iMask;

        System.out.println("Updated Number :"+iValue); 

    }
}
