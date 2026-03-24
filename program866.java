import java.util.*;

class program866
{
    public static void main(String Ar[]) {
       
        
        int iCount = 0;
        Scanner sobj = new Scanner(System.in);

        String Str = null;

        System.out.println("Enter the String :");
        Str = sobj.nextLine();

        StringBuffer sb = null;
        Str = Str.trim();
        String Arr[] = Str.split(" ");
       

        for(int i = 0;i<Arr.length;i++)
        {
            sb = new StringBuffer(Arr[i]);
            sb.reverse();
            System.out.print(sb+" ");
            
        }
        System.out.println();
         
       
       
    }

}