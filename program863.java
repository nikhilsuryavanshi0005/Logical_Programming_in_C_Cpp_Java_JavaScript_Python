import java.util.*;

class program863
{
    public static void main(String Ar[]) {
       
        
        int iCount = 0;
        Scanner sobj = new Scanner(System.in);

        String Str = null;

        System.out.println("Enter the String :");
        Str = sobj.nextLine();

        Str = Str.trim();
        String Arr[] = Str.split(" ");
       

        for(int i = 0;i<Arr.length;i++)
        {
            
            if(Arr[i].equalsIgnoreCase("india")== true)
            {
                iCount++;
               
            }
        }
         
        System.out.println("India Ocurrs in String :"+iCount+" Times");
       
    }

}