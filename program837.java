import java.util.*;

class program837 {
    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        
        int Num = 0;
        int iTemp = 0;
        int iCube = 0;
        
        int iCount = 0;

        System.out.println("Enter Number :");
        Num = sobj.nextInt();

        iTemp = Num;
        iCube = Num * Num* Num;

        

        while(Num != 0)
        {
            iCount++;
            Num = Num /10;

        }

        if( (iCube %((int)Math.pow(10, iCount))) == iTemp )
        {
            System.out.println(iTemp+" is Triomorphic Number......");
        } 
        else
        {
            System.out.println(iTemp+" is Not a Triomorphic Number.....");
        }

       
    }

}