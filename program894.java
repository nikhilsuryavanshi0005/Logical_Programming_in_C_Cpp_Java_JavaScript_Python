import java.util.*;
import java.time.LocalDate;
import java.time.LocalTime;
import java.io.*;

class Student
{
    private String Name;
    private int Marks;

    public Student(String a,int b)      
    {   
        this.Name = a;
        this.Marks = b;
    }
    
    public String getName()
    {
        return this.Name;
    }

    public int getMarks()
    {
        return this.Marks;
    }

    @Override
    public String toString()
    {
        return this.Name+":"+this.Marks;
    }
}

class program894
{
    public static void main(String A[])
    {
        ArrayList<Student> DataBase = new ArrayList<Student>();
        Student S1 = new Student("Sagar", 83);
        Student S2 = new Student("Rahul", 81);
        Student S3 = new Student("Pooja", 93);
        Student S4 = new Student("Amar", 72);
        int MaxMarks = 0;
        String MaxName = null;
        DataBase.add(S1);
        DataBase.add(S2);
        DataBase.add(S3);
        DataBase.add(S4);
        String FileName = "Nikhil.csv";
       
        try( FileWriter fwobj = new FileWriter(FileName);)
        {
            
            fwobj.write("Name,Marks\n");

            for(Student S : DataBase)
            {
                
               fwobj.write(S.getName()+","+S.getMarks()+"\n");
            }
            
        }
        catch(Exception eobj)
        {
            System.out.println("Exception Occured");
            
        }
        finally
        {
            System.out.println("Data gets Stored Successfully......");

            
            
        }

        DataBase.clear();
       



    }
}