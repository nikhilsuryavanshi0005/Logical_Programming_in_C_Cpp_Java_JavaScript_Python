import java.util.*;

class program867
{
    public static void main(String Ar[]) {
       
        
        int iCount = 0;
        Scanner sobj = new Scanner(System.in);

        String Str = null;

        System.out.println("Enter the String :");
        Str = sobj.nextLine();

        
        Str = Str.trim();
        String Arr[] = Str.split(" ");
       
        StringBuffer sb = null;
        StringBuffer FinalStr = new StringBuffer();
        for(int i = 0;i<Arr.length;i++)
        {
            sb = new StringBuffer(Arr[i]);
            sb.reverse();
            FinalStr.append(sb);
           
            FinalStr.append(" ");

        }
        System.out.println(FinalStr);
         
       
       
    }

}