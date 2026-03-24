import java.util.*;

class program857
{
    public static void main(String Ar[]) {
       
        String Str;
        int iMax = 1;

        Scanner sobj = new Scanner(System.in);

       

        System.out.println("Enter the String :");
        Str = sobj.next();

         Str = Str.trim();
        String Arr[] = Str.split(" ");
       

        for(int i = 0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]+":"+Arr[i].length());
            if(Arr[i].length() >iMax)
            {
                iMax = Arr[i].length();
                System.out.println(Str+"Maximium length of Word is "+iMax);
            }
        }
       
    }

}