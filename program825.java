import java.util.*;

class program823 {
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

        

      


        iTemp = Num;

        
        // x = 5 , y = 3  
        while(Num != 0)
        {
            iDigit = Num % 10;
            
            iCount++;
            Num = Num /10;
            
        }

        Num = iTemp;
       
        while( Num!= 0)
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