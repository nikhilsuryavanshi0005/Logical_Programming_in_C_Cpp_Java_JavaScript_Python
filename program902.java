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
    private String Description;
   

    public StudyLog(LocalDate a,String b,double c,String d)
    {
        this.Date = a;
        this.Subject = b;
        this.Duration = c;
        this.Description = d;

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

    public String getDescription()
    {
        return this.Description;
    }

    @Override
    public String toString()
    {
        return Date+" | "+ Subject +" | "+Duration+" | "+Description;
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

        if(Database.isEmpty())
        {
            System.out.println("...........Nothing to Display........");
            System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            return;
       
        }

        System.out.println("Log Report of Study Tracker : ");

        System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

        for(StudyLog s : Database)
        {
            System.out.println(s);
        }
        System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");


    }

    public void ExportCSV()
    {
        System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

        if(Database.isEmpty())
        {
            System.out.println("..........Nothing to Export........");
            System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            return;
       
        }

        String FileName = "NikhilStudyTracker.csv";

        try(FileWriter fwobj = new FileWriter(FileName))
        {
            

            fwobj.write("Date,Subject,Duration,Description \n");

            for(StudyLog s : Database)
            {
                fwobj.write(s.getDate()+" ,"+s.getSubject().replace(",", " ")+","+s.getDuration()+","+s.getDescription().replace(",", " ")+"\n");
            } 
            System.out.println(".........Data get Successfully Exported.......");
            System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

        }
        catch(Exception eobj)
        {
            System.out.println("Exception Occurred");
        }



    }

    public void SummarybyDate()
    {
        System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        if(Database.isEmpty())
        {
            System.out.println("..Data Base is Empty.....");
            return;
        }

        System.out.println("......Summary by Date of Study Tracker.....");

        TreeMap<LocalDate, Double> tobj = new TreeMap<LocalDate,Double>();

        LocalDate lobj = null;
        double d = 0.0;
        double old = 0.0;
        for(StudyLog sobj : Database)
        {
            lobj = sobj.getDate();
            d = sobj.getDuration();

            if(tobj.containsKey(lobj))
            {
                old = tobj.get(lobj);
                tobj.put(lobj, d+old);
            }
            else
            {
                tobj.put(lobj,d);
            }
        }
        //Display details as per the Date
        for(LocalDate l : tobj.keySet())
        {
            System.out.println("Date : "+l+"Total Study duration : "+tobj.get(l));
        }
        System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
      

    }

     public void SummarybySubject()
    {
        System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        if(Database.isEmpty())
        {
            System.out.println("..Data Base is Empty.....");
            return;
        }

        System.out.println("......Summary by Subject of Study Tracker.....");

        TreeMap<String, Double> tobj = new TreeMap<String,Double>();

        String s = null;
        double d = 0.0;
        double old = 0.0;
        for(StudyLog sobj : Database)
        {
            s = sobj.getSubject();
            d = sobj.getDuration();

            if(tobj.containsKey(s))
            {
                old = tobj.get(s);
                tobj.put(s, d+old);
            }
            else
            {
                tobj.put(s,d);
            }
        }
        //Display details as per the subject
        for(String str : tobj.keySet())
        {
            System.out.println("Subject : "+str+"Total Study duration : "+tobj.get(str));
        }
        System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
      
    }  

}
class program902
{
    public static void main(String A[])
    {
        StudyTracker stobj = new StudyTracker();

        Scanner sobj = new Scanner(System.in);
        System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        System.out.println("..........Welcome to Nikhil Study Tracker Application.........");

        System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

       
       

        int iChoice = 0;
        
        do
        {
            System.out.println("Please Select Appropriate Option : ");
            System.out.println("1 : Insert New Study Logs");
            System.out.println("2 : View all Study Logs");
            System.out.println("3 : Export Study Logs to csv");
            System.out.println("4 : Summary of Study Logs by Date");
            System.out.println("5 : Summary of Study Logs by Subject");
            System.out.println("6 : Exit Study Logs Application");

            iChoice = sobj.nextInt();
            
            switch(iChoice)
            {
                case 1 :
                    stobj.InsertLog();
                    break;

                //View all Study Logs
                case 2 :
                    stobj.DisplayLog();
                    break;
                
                //Export Study Logs to csv
                case 3 :
                    stobj.ExportCSV();
                    break;

                //Summary of Study Logs by Date    
                case 4 :
                    stobj.SummarybyDate();
                    break;

                //Summary of Study Logs by Subject
                case 5 :
                    stobj.SummarybySubject();
                    break;
                
                //Exit the application
                case 6 :
                    System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
                    System.out.println("...........Thank You For Using Nikhil's Study Tracker Application.......");
                    System.out.println("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
                    break;

                default:
                    System.out.println("Please Enter Valid Option....");
                    break;
            }

        }while(iChoice != 6);
    }
}