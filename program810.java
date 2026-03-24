import java.util.*;

class program810 {
    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Rows in Theator :");
        int R = sobj.nextInt();

        System.out.println("Enter the Number of Columns : ");
        int C = sobj.nextInt();

        if (R <= 0 || C <= 0) {
            System.out.println("Invalid Input");
            return;
        }

        int Seats[][] = new int[R][C];

        System.out.println("Enter the Booking Details :");

        int i = 0;
        int j = 0;

        for (i = 0; i < R; i++) {
            System.out.println("Enter Details of Row : " + (i + 1));
            for (j = 0; j < C; j++) {
                Seats[i][j] = sobj.nextInt();

                if (Seats[i][j] != 0 && Seats[i][j] != 1) {
                    System.out.println("Invalid Input");
                    return;
                }
            }
        }
    }

}