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
class program888
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        ArrayList<Student> aobj = new ArrayList<Student>();

        Student S1 = new Student("Sagar", 73);
        Student S2 = new Student("Rahul", 81);
        Student S3 = new Student("Pooja", 93);
        Student S4 = new Student("Amar", 72);
        
        aobj.add(S1);
        aobj.add(S2);
        aobj.add(S3);
        aobj.add(S4);

        for(Student S : aobj)
        {
            System.out.println(S);
        }

        aobj.clear();
          
        
    }
}