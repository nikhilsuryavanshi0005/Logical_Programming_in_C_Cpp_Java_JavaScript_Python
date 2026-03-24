

import java.util.*;

class program878
{
    public static void main(String Ar[]) {
       
       
        Scanner sobj = new Scanner(System.in);

        String Str = null;
        int iMax = 0;
        char cMax = '\0';

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
        
        for(char ch:hobj.keySet())
        {
            System.out.println(ch +":"+hobj.get(ch));
            if(iMax < hobj.get(ch))
            {
                iMax = hobj.get(ch);
                cMax = ch;
            }
        }

        System.out.println("Maximium times Occurred Character is : "+ cMax +" with frequency : "+iMax);
        
        
    }

}