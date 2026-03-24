import java.util.*;

class program822 {
    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        int x = 0,y = 0;
        int iPower = 0;
        System.out.println("Enter Base :");
        x = sobj.nextInt();

        System.out.println("Enter exponent / power :");
        y = sobj.nextInt();

       

        

        iPower = 1;
        // x = 5 , y = 3  
        while(y != 0)
        {
            iPower = iPower * x;
            y--;
        }

        System.out.println(iPower);

    }

}