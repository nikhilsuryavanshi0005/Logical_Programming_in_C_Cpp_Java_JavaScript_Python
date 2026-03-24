import java.util.*;

class program813 {
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

        int TotalBooked = 0;
        int MaxBookedinRow = 0;
        int Row_With_Max = 0;
        boolean Full_Row_Exist = false;
        int Row_Booked = 0;

        for (i = 0; i < R; i++) {
            for (j = 0; j < C; j++) {
                if (Seats[i][j] == 1) {
                    TotalBooked++;
                }

                Row_Booked = Row_Booked + Seats[i][j];
            }

            if (Row_Booked > MaxBookedinRow) {
                MaxBookedinRow = Row_Booked;
                Row_With_Max = i;
            }

            if (Row_Booked == C) {
                Full_Row_Exist = true;
            }

        }

        System.out.println("Total Booked Seats : " + TotalBooked);
        System.out.println("Row with Maximium Booking : " + (Row_With_Max + 1));

        System.out.println("Full Row Exist :" + ((Full_Row_Exist ? "Yes" : "No"));

        System.out.println("Seat Layout of Threator :");

        for (i = 0; i < R; i++) {
            for (j = 0; j < C; j++) {
                System.out.print("\t" + ((Seats[i][j] == 1) ? "BOOK" : "FREE"));
            }
            System.out.println();
        }

    }

}