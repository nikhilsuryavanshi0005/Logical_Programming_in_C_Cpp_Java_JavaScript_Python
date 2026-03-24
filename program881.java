
/*
        0   1   2   3   4   5   6   7   8   9   ....... 
        a   b   c   d   e   f   g   h   i   j   .......
        97  98  99  100 101 102 103 104 105 106 .......
 */

import java.util.*;

class program881
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

        int Count[] = new int[26];
       

        int i =0;
        boolean bFlag = true;

        for(i = 0;i<Arr.length;i++)
        {
            Count[Arr[i] - 'a']++;
            Count[Brr[i] - 'a']--;
            
        }

       

        for(i = 0;i<Count.length;i++)
        {
            if(Count[i] != 0)
            {
                bFlag = false;
                break;
            }
        }

        if(bFlag == true)
        {
            System.out.println("Strings are Anagram.....");
        }
        else
        {
            System.out.println("Strings are Not Anagram.....");
        }
        
    }

}