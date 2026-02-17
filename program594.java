import java.io.*;
import java.util.*;


class program594
{
    public static void main(String A[]) throws Exception
    {
        String str = "Hariom Classes Latur";
        System.out.println("Data : "+str);
        System.out.println("Length of String is : "+str.length());

       for( int i =str.length(); i<100; i++)
       {
            str= str+" ";
       }
        
        System.out.println("New Length of String is : "+str.length());
    
    }
}