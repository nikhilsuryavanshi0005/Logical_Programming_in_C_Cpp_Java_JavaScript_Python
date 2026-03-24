import java.util.*;

class program827 {
    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        int Num = 0;
        int iPower = 0;
        int iDigit = 0;
        int iCount = 0;
        int iTemp = 0;
        int iSum =0;

        System.out.println("Enter Number :");
        Num = sobj.nextInt();

        

      
        iCount = Integer.toString(Num).length();

        iTemp = Num;

        
       
       
        while( Num != 0)
        {
            iDigit = Num % 10;
            
            
          

            iPower = (int)Math.pow(iDigit, iCount);
           
            iSum = iSum + iPower;
            Num = Num /10;
        }

        if(iSum == iTemp)
        {
            System.out.println(iTemp+" It is ArmStrong Number.....");
        }
        else
        {
            System.out.println(iTemp+" It is  Not ArmStrong Number.....");
        }

    }

}