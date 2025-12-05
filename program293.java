import java.util.*;

public class program293 
{
    public static void main(String A[]) 
    {
        int Arr[] = {45,21,90,54,78};

        //this is for each loop
        for(int no:Arr)
        {
            System.out.println(no);
        }

        Arrays.sort(Arr);
        System.out.println("Array After Sorting:");

        for(int no:Arr)
        {
            System.out.println(no);
        }

    }

    
}
