import java.util.*;

class program807 {
    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Cities");
        int N = sobj.nextInt();

        if (N <= 0) {
            System.out.println("Invalid Input");
            return;
        }

        int Arr[][] = new int[N][7];
        int i = 0;
        int j = 0;
        int No = 0;

        System.out.println("Enter Electricity Consumed by Each City :");

        for (i = 0; i < N; i++) {
            System.out.println("Enter Consumption of Day :" + (i + 1));
            No = sobj.nextInt();
            for (j = 0; j < 7; j++) {
                if (No < 0) {
                    System.out.println("Invalid Input");
                    return;
                }
                Arr[i][j] = No;
            }
        }

        int Weekly[] = new int[7];

        int Highest_Unit_City = 0;
        int Max_Weekly = 0;
        int Peek_Day = 0;
        int Max_Day_Total = 0;
        int Sum = 0;

        // weekly total + highest consumption

        for (i = 0; i < N; i++) {
            Sum = 0;
            for (j = 0; j < 7; j++) {
                Sum = Sum + Arr[i][j];
            }
            Weekly[i] = Sum;

            if (Sum > Max_Weekly) {
                Max_Weekly = Sum;
                Highest_Unit_City = i;

            }
        }

        System.out.println("Highest Consumption : City" + Highest_Unit_City);
        System.out.println("Highest Consumption : Weekly" + Max_Weekly);

    }

}