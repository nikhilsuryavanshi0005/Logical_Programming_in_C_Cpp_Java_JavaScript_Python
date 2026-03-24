import java.util.*;

class program802 {
    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        int First = 0;
        int Second = 0;
        int Next = 0;
        int Size = 0;
        int i = 0;

        System.out.println("Enter the Number of Elements");
        Size = sobj.nextInt();

        for (i = 0, First = 0, Second = 1; i <= Size; i++) {
            System.out.print(First + " ");

            Next = First + Second;

            First = Second;

            Second = Next;
        }

        System.out.println();

    }

}