

import java.util.*;

class program874
{
    public static void main(String Ar[]) {
       
       
        Scanner sobj = new Scanner(System.in);

        String Str = null;

        System.out.println("Enter the String :");
        Str = sobj.nextLine();

        
        char Arr[] = Str.toCharArray();

        HashMap<Character,Integer> hobj = new HashMap<Character,Integer>();

        hobj.put('h', 1);
        hobj.put('e', 1);
        hobj.put('l', 1);
        hobj.put('l', 2);
        hobj.put('o', 1);

        System.out.println(hobj.keySet());
    }

}