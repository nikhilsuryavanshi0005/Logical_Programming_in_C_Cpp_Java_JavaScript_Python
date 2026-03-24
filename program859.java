import java.util.*;

class program859
{
    public static void main(String Ar[]) {
       
        
        int iMax = 0;

        Scanner sobj = new Scanner(System.in);

        String Str = null;

        System.out.println("Enter the String :");
        Str = sobj.nextLine();

        Str = Str.trim();
        String Arr[] = Str.split(" ");
       

        for(int i = 0;i<Arr.length;i++)
        {
            
            if(Arr[i].length() >iMax)
            {
                iMax = Arr[i].length();
               
            }
        }
         
        System.out.println("Maximium length of Word is "+iMax);
       
    }

}