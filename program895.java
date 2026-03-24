import java.util.*;
import java.time.LocalDate;
import java.time.LocalTime;
import java.io.*;
import java.security.cert.LDAPCertStoreParameters;

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

    public String toString()
    {
        return Date+" | "+ Subject +" | "+Duration+" | "+Decription;
    }
}

class program895
{
    public static void main(String A[])
    {
        
        LocalDate lobj = LocalDate.now();
        StudyLog SLobj = new StudyLog(lobj, "C Programming", 2, "Advance Pointer and Array");

        System.out.println(SLobj);

    }
}