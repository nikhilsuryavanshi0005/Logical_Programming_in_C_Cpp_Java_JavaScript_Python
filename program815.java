import java.util.*;

class program815 {
    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        int No = 0, iFact = 0;

        System.out.println("Enter the Number :");
        No = sobj.nextInt();

        iFact = 1;
        for (int i = 1; i <= No; i++) {
            iFact = iFact * i;
        }

        System.out.println("Factorial is :" + iFact);

    }

}