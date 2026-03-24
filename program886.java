import java.util.*;


class Student
{
    public String Name;
    public int Marks;

    public Student(String a,int b)      //if cpp str.cpy we have to use
    {   
        this.Name = a;
        this.Marks = b;
    }
    public void Display()
    {
        System.out.println(Name+" : "+Marks);
    }

    @Override
    public String toString()
    {
        return "Inside toString";
    }
}
class program886 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        ArrayList<Integer> aobj = new ArrayList<Integer>();

        Student S1 = new Student("Sagar", 73);
        Student S2 = new Student("Rahul", 81);
        Student S3 = new Student("Pooja", 93);
        Student S4 = new Student("Amar", 72);

        System.out.println(S1);
        System.out.println(S2);

        S1.Display();
        S2.Display();
       
        
    }
}