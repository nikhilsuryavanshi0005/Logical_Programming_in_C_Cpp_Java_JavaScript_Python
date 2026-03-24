import java.util.*;

class program802 {

    public static long Fibbonacci(int N) {
        if (N <= 1) {
            return N;
        }

        return Fibbonacci(N - 1) + Fibbonacci(N - 2);
    }

    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Elements");
        int Size = sobj.nextInt();

        int i = 0;

        for (i = 0; i <= Size; i++) {
            System.out.print(Fibbonacci(i) + " ");
        }

        System.out.println();
    }

}