
/*
        0   1   2   3   4   5   6   7   8   9   ....... 
        a   b   c   d   e   f   g   h   i   j   .......
        97  98  99  100 101 102 103 104 105 106 .......
 */

import java.util.*;

class program882
{
    public static void main(String Ar[]) {
       
       
        Scanner sobj = new Scanner(System.in);

        String Str1 = null;

        System.out.println("Enter the First String :");
        Str1 = sobj.nextLine();

        System.out.println("Enter the Second String :");
        String Str2 = sobj.nextLine();

        if(Str1.length() != Str2.length())
        {
            System.out.println("Strings are not anagram....");
            return;
        }

        char Arr[] = Str1.toCharArray();
        char Brr[] = Str2.toCharArray();

        Arrays.sort(Arr);
        Arrays.sort(Brr);

        Str1 = new String(Arr);
        Str2 = new String(Brr);

        if(Str1.equals(Str2)==true)
        {
            System.out.println("String are Anagram...");
        }
        else
        {
             System.out.println("String are Not Anagram...");
        }
       
    }

}