import java.util.*;

class program860
{
    public static void main(String Ar[]) {
       
        
        int iMax = 1;
        String MaxWord = null;

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
                MaxWord = Arr[i];
               
            }
        }
         
        System.out.println("Maximium length of Word is "+iMax);
        System.out.println("Maximium length Word is: "+MaxWord);
       
    }

}