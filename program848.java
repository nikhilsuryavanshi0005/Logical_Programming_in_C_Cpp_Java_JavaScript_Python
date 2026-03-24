import java.util.*;

class program848
{
    public static void main(String Ar[]) {
       
        String Str = "  India   is   my  country  ";

       

        System.out.println(Str);
        Str = Str.trim();

        //regex = Regular Expression
        Str = Str.replaceAll("\\s+", " ");
        System.out.println(Str);
        System.out.println(Str.length());

       
    }

}