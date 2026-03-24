import java.util.*;

class program851
{
    public static void main(String Ar[]) {
       
        String Str = "  India   is   my  country  ";

       

        System.out.println(Str);
        Str = Str.trim();

        //regex = Regular Expression
       Str = Str.replaceAll("\\s+", " ");    //Important logic
       
        
        String Arr[] = Str.split(" ");
         System.out.println(Arr.length);

        for(int i = 0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
       
    }

}