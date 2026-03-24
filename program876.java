

import java.util.*;

class program876
{
    public static void main(String Ar[]) {
       
       
        Scanner sobj = new Scanner(System.in);

        String Str = null;

        System.out.println("Enter the String :");
        Str = sobj.nextLine();

        
        char Arr[] = Str.toCharArray();

        HashMap<Character,Integer> hobj = new HashMap<Character,Integer>();

        int old = 0;

        for(char ch : Arr)
        {
            if(hobj.containsKey(ch))
            {
                old = hobj.get(ch);
                hobj.put(ch, old + 1);
            }
            else
            {
                hobj.put(ch, 1);
            }
            
        }
        System.out.println(hobj);
        
        
    }

}