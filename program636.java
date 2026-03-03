import java.util.Scanner;

class program636 {
    public static void main(String Arr[]) {
        Scanner sobj = new Scanner(System.in);

        int iValue;
        int iMask; 
        
        System.out.println("Enter the Number :");
        iValue = sobj.nextInt();


        iMask = 0xffffdfff;

        iValue = iValue & iMask;

        System.out.println("Updated Number :"+iValue); 

    }
}
