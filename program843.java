import java.util.*;

class program843 
{
    public static void main(String Ar[]) {
       
        String Str = "    Hello    World    ";

       

        System.out.println(Str);
        Str = Str.trim();

        Str = Str.replaceAll("l", "L");
        System.out.println(Str);

       
    }

}