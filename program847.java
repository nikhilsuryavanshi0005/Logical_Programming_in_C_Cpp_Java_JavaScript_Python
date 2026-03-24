import java.util.*;

class program847
{
    public static void main(String Ar[]) {
       
        String Str = "  India   is   my  country  ";

       

        System.out.println(Str);
        Str = Str.trim();

        Str = Str.replaceAll("  ", " ");
        System.out.println(Str);
        System.out.println(Str.length());

       
    }

}