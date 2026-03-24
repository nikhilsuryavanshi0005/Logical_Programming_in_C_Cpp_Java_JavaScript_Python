import java.util.*;


class Student
{
    public String Name;
    public int Marks;

    public Student(String a,int b)      
    {   
        this.Name = a;
        this.Marks = b;
    }
    

    @Override
    public String toString()
    {
        return this.Name+":"+this.Marks;
    }
}

class program887
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        ArrayList<Integer> aobj = new ArrayList<Integer>();

        Student S1 = new Student("Sagar", 73);
        Student S2 = new Student("Rahul", 81);
        Student S3 = new Student("Pooja", 93);
        Student S4 = new Student("Amar", 72);

        System.out.println(S1);     //S1.toString this call will go
        System.out.println(S2);     //S2.toString this call will go

        
        
    }
}