import java.util.*;

class program850
{
    public static void main(String Ar[]) {
       
        String Str = "  India   is   my  country  ";

       

        System.out.println(Str);
        Str = Str.trim();

        //regex = Regular Expression
       // Str = Str.replaceAll("\\s+", " ");    //Important logic
       
        
        String Arr[] = Str.split(" ");
         System.out.println(Arr.length);

       
    }

}