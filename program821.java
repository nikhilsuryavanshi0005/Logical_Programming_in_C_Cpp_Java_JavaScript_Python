import java.util.*;

class program820 {
    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        int x = 0,y = 0;
        int iPower = 0;
        System.out.println("Enter Base :");
        x = sobj.nextInt();

        System.out.println("Enter exponent / power :");
        y = sobj.nextInt();

       

        int i = 0;

        iPower = 1;
        // x = 5 , y = 3  
        for(i = 1;i<=y;i++)
        {
            iPower = iPower * x;
        }

        System.out.println(iPower);

    }

}