import java.io.*;

class program75
{
    public static void main(String Arr[]) 
    {
        int iNo = 0;

        int iCnt = 0;

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the Number:");
        try
        {
            iNo  = Integer.parseInt(bobj.readLine());
        }
        catch(IOException iobj)
        {

        }

        for(iCnt = 1; iCnt<=iNo/2;iCnt++)
        {
            if(iNo%iCnt ==0)
            {
                System.out.println(+iCnt);
            }
        }
    }
}