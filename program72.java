class program72
{
    public static void main(String Arr[])
    {
        int no = 12;
        int iCnt = 0;
        for(iCnt = 1; iCnt<=no/2;iCnt++)
        {
            if(no%iCnt ==0)
            {
                System.out.println(+iCnt);
            }
        }
    }
}