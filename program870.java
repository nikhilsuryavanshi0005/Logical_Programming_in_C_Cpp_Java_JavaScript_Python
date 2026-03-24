import java.util.*;

// india is my Country and i live in India
// Output : Bharat is my Country and live in Bharat
class program870
{
    public static void main(String Ar[]) {
       
        
        int iCount = 0;
        Scanner sobj = new Scanner(System.in);

        String Str = null;

        System.out.println("Enter the String :");
        Str = sobj.nextLine();

        
        Str = Str.trim();
        String Arr[] = Str.split(" ");
       
        
        StringBuffer FinalStr = new StringBuffer();

        for(int i = 0;i<Arr.length;i++)
        {
            if(Arr[i].equalsIgnoreCase("india")== true)
            {
                FinalStr.append("bharat"+" ");
            }
            else
            {
                FinalStr.append(Arr[i]+" ");
            }
        }

        
        System.out.println(FinalStr);
       
       
       
    }

}