//OOP Design

class ArrayX
{
    public int Arr[];
    public int iSize;
    public ArrayX(int no)
    {
        no = iSize;
        Arr = new int[iSize];
    }
} 

class program103
{
    public static void main(String Ar[])
    {
        ArrayX aobj1 = new ArrayX(5);
        ArrayX aobj2 = new ArrayX(3);
        ArrayX aobj3 = new ArrayX(7);
    }
}