import java.util.*;

class Matrix
{
   
    public int iRow;
    public int iCol;
    public int Arr[][];

    public Matrix(int a,int b)
    {
        this.iRow = a;
        this.iCol = b;

        Arr = new int [iRow][iCol];
    }

    public void Accept()
    {
        int i = 0;
        int j = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Elements of Matrix :");

        for( i = 0; i < iRow; i++)
        {
            System.out.println("Enter the Elements of Row :"+(i+1));
            for(j = 0; j <iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        sobj.close(); // sobj = null;
        
    }

    public void Display()
    {
        int i = 0;
        int j = 0;

       
        System.out.println("Elements of Matrix are  :");

        for( i = 0; i < iRow; i++)
        {
            for(j = 0; j <iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }


       
        
    }

    public int Summation()
    {
        int i = 0;
        int j = 0;
        int iSum = 0;



        for( i = 0; i < iRow; i++)
        {
            for(j = 0; j <iCol; j++)
            {
               iSum = iSum + Arr[i][j];
            }
            System.out.println();
        }

        return iSum;
       
        
    }
    public float Average()
    {
        int i = 0;
        int j = 0;
        int iSum = 0;



        for( i = 0; i < iRow; i++)
        {
            for(j = 0; j <iCol; j++)
            {
               iSum = iSum + Arr[i][j];
            }
           
        }

        return (iSum/(iRow *iCol));
       
        
    }
    


}

class program791
{
    public static void main(String Ar[])
    {
        Matrix  mobj = new Matrix(4, 4);

        mobj.Accept();
        mobj.Display();
        int iRet = mobj.Summation();

        System.out.println("Summation of Matrix is "+iRet);

         System.out.println("Summation of Matrix is "+mobj.Average());

    }
}
