import java.util.*;

class ArrayX
{
    public void Display(int Brr[])
    {
        int i = 0;
        for(i= 0; i<Brr.length; i++)
        {
            System.out.println(Brr[i]);
        }
    }
    public int Summation(int Brr[])
    {
        int i = 0;
        int iSum = 0;
        for(i = 0;i<Brr.length;i++)
        {
            iSum = iSum + Brr[i];
        }
        return iSum;

        
    }
}
class program102
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, i = 0, iRet = 0;
        System.out.println("Enter the Size of Array :");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];
        

        System.out.println("Enter the Elements :");
        for(i = 0; i <Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
        

        ArrayX aobj = new ArrayX();
        aobj.Display(Arr);
        iRet = aobj.Summation(Arr);

        System.out.println("Even Elements are :"+iRet);

        //Important

        aobj = null;
        Arr = null;
        sobj = null;

        System.gc();

    }
}