import java.util.*;

class program835 {
    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        int Num = 0;

       

        System.out.println("Enter Number :");
        Num = sobj.nextInt();

        

        
        if((Num +1 ) % Math.sqrt(Num+1) == 0)
        {
            System.out.println(Num+" is Sunny Number......");
        } 
        else
        {
            System.out.println(Num+" is Not a Sunny Number.....");
        }

       
    }

}