import java.util.*;

class program869
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
            
            (FinalStr.append(sb.reverse())).append(" ");
           

        }
        String ret = new String(FinalStr);
        ret = ret.trim();
        System.out.println(ret);
        
        System.out.println(ret.length());
        System.out.println(Str.length());
         
       
       
    }

}