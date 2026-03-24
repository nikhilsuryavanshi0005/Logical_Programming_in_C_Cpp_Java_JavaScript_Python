import java.util.*;

class program812 {
    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        int No = 0, iDigit = 0;

        System.out.println("Enter the Number of Rows in Theator :");
        No = sobj.nextInt();

        while (No != 0) {
            iDigit = No % 10;
            System.out.println(iDigit);
            No = No / 10;
        }

    }

}