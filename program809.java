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
            for (j = 0; j < 7; j++) {
                No = sobj.nextInt();
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

        int Day_Sum = 0;
        int Day = 0;
        // Day with Maximium Concuption

        for (Day = 0; Day < 7; Day++) {
            Day_Sum = 0;

            for (i = 0; i < N; i++) {
                Day_Sum = Day_Sum + Arr[i][Day];
            }

            if (Day_Sum > Max_Day_Total) {
                Max_Day_Total = Day_Sum;
                Peek_Day = Day;
            }
        }

        String DayName[] = { "SUN", "Mon", "Tue", "Wed", "Thur", "Fri", "Sat" };
        System.out.println("Peak Consumption DayName : " + DayName[Peek_Day]);
        System.out.println("Peak Consumption Day : " + Peek_Day);

        System.out.println("Weekly Concumption : ");
        for (i = 0; i < N; i++) {
            System.out.println("City :" + (i + 1) + ":" + Weekly[i]);
        }

        // City More than 500 Consumption

        System.out.println("Cities More than 500 Units Consumption : ");
        for (i = 0; i < N; i++) {
            if (Weekly[i] > 500) {
                System.out.println("City : " + (i + 1));
            }
        }
    }

}