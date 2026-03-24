import java.util.*;

class program865
{
    public static void main(String Ar[]) {
       
        
        int iCount = 0;
        Scanner sobj = new Scanner(System.in);

        String Str = null;

        System.out.println("Enter the String :");
        Str = sobj.nextLine();

        StringBuffer sb = new StringBuffer(Str);

        System.out.println(sb);
        System.out.println(sb.length());
        sb.reverse();
        System.out.println(sb);
       
    }

}