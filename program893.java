import java.util.*;
import java.time.LocalDate;
import java.time.LocalTime;
import java.io.*;

class program893
{
    public static void main(String A[])
    {
        String FileName = "Nikhil.csv";
        try(FileWriter fwobj = new FileWriter(FileName))
        {
            fwobj.write("Name,Marks\n");
            fwobj.write("Sagar,90\n");
            fwobj.write("Amith,80\n");
            fwobj.write("Pooja,97\n");
        }
        catch(Exception eobj)
        {
            System.out.println("Exception Occured");
           

        }
       



    }
}