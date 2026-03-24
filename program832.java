import java.util.*;

class program832 {
    public static void main(String Ar[]) {
        Scanner sobj = new Scanner(System.in);

        
        int Num = 0;
        int iTemp = 0;
        int iSquare = 0;
        
        int iCount = 0;

        System.out.println("Enter Number :");
        Num = sobj.nextInt();

        iTemp = Num;
        iSquare = Num * Num;

        

        while(Num != 0)
        {
            iCount++;
            Num = Num /10;

        }

        if( (iSquare %((int)Math.pow(10, iCount))) == iTemp )
        {
            System.out.println(iTemp+" is Automorphic Number......");
        } 
        else
        {
            System.out.println(iTemp+" is Not a Automorphic Number.....");
        }

       
    }

}