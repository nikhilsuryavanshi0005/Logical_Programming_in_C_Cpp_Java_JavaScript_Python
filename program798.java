import java.util.*;

class program798
{
    public static void main( String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        int Marks[] = new int[5];
        int i = 0;
        boolean fail = true;
        int iSum = 0;

        System.out.println("Enter the Marks of Five Subjects :");
        
        for( i = 0;i < Marks.length;i++)
        {
            
            Marks[i] = sobj.nextInt();
            iSum = iSum + Marks[i];
            
           
            if(Marks[i] < 0 || Marks[i] > 100)
            {
                System.out.println("Invalid input");
                return;
                
            }
            if(Marks[i] < 35)
            {
                fail = false;
            }

           
        }


        if(fail == false)
        {
            System.out.println("Result : Failed");
            return;
        }

       
        float Average = ((float)iSum / (float)(5));
       
        System.out.println("Average Marks :"+Average);
        if(Average >= 75.0f)
        {
            System.out.println("Result :Distinction");
        }
        else if(Average >= 60.0f)
        {
            System.out.println("Result :First Class");
        }
        else if(Average >= 50.0f)
        {
            System.out.println("Result :Second Class");
        }
        else if(Average < 50.0f)
        {
            System.out.println("Result :Pass");
        }

         sobj.close();
    }

   
}