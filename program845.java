import java.util.*;

class program845
{
    public static void main(String Ar[]) {
       
        String Str = "    Hello    Worlld    ";

       

        System.out.println(Str);
        Str = Str.trim();

        Str = Str.replaceAll(" ", "");
        System.out.println(Str);
        System.out.println(Str.length());

       
    }

}