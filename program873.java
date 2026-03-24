
/*
        0   1   2   3   4   5   6   7   8   9   ....... 
        a   b   c   d   e   f   g   h   i   j   .......
        97  98  99  100 101 102 103 104 105 106 .......
 */

import java.util.*;

class program873
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

        System.out.println(hobj);
    }

}