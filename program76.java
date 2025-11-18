import java.io.*;

class program75
{
    public static void main(String Arr[]) throws IOException //Not Programming
    {
        int iNo = 0;

        int iCnt = 0;

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the Number:");

        iNo  = Integer.parseInt(bobj.readLine());
        

        for(iCnt = 1; iCnt<=iNo/2;iCnt++)
        {
            if(iNo%iCnt ==0)
            {
                System.out.println(+iCnt);
            }
        }
    }
}