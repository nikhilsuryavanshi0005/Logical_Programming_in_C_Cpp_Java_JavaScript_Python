import java.util.*;
import java.time.LocalDate;
import java.time.LocalTime;
import java.io.*;
import java.security.cert.LDAPCertStoreParameters;

//this class is done
class StudyLog
{
    private LocalDate Date;
    private String Subject;
    private double Duration;
    private String Decription;
   

    public StudyLog(LocalDate a,String b,double c,String d)
    {
        this.Date = a;
        this.Subject = b;
        this.Duration = c;
        this.Decription = d;

    }

    public LocalDate getDate()
    {
        return this.Date;
    }

    public String getSubject()
    {
        return this.Subject;
    }

    public double getDuration()
    {
        return this.Duration;
    }

    public String getDecription()
    {
        return this.Decription;
    }

    @Override
    public String toString()
    {
        return Date+" | "+ Subject +" | "+Duration+" | "+Decription;
    }

}
// 
class StudyTracker
{
    public ArrayList<StudyLog> Database = new ArrayList<StudyLog>();

    public void InsertLog()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");


        System.out.println("Enter Valid Details of Study.........");
        System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");


        LocalDate Date = LocalDate.now();

        System.out.println("Please Enter the Name of Subject like C/C++/Java/Pyton/GoLang/Ruby : ");
        String subj = sobj.nextLine();

        System.out.println("Please Enter the Time Period of Study in Hours : ");
        double Dur = sobj.nextDouble();

        System.out.println("Please Enter the Description of Your Study : ");
        String Descrip = sobj.next();

       StudyLog studyobj = new StudyLog(Date, subj, Dur, Descrip);

       Database.add(studyobj);

       System.out.println("Study Log gets Stored Successfully");

        System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");


    }

    public void DisplayLog()
    {
        System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");


        System.out.println("Log Report of Study Tracker : ");

        System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

        for(StudyLog s : Database)
        {
            System.out.println(s);
        }
        System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");


    }


}

class program897
{
    public static void main(String A[])
    {
        StudyTracker stobj = new StudyTracker();

        stobj.InsertLog();
        stobj.DisplayLog();
    }
}