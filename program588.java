import java.io.*;
import java.util.*;

class program588
{
    public static void main(String A[]) throws Exception
    {
       String str = "Hello";

       byte Arr[] = str.getBytes();

       byte Key = 0x11;

       System.out.println("Original data "+str);

       for(int i = 0; i<Arr.length;i++)     //logic for Encrpytion
       {
            Arr[i] = (byte)(Arr[i] ^ Key);
       }
        
       String output = new String(Arr);

       System.out.println("Encrypted Data :"+output);

       for(int i = 0; i<Arr.length;i++)     //logic for Decripytion
       {
            Arr[i] = (byte)(Arr[i] ^ Key);
       }

       String out = new String(Arr);

       System.out.println("Decrpyted Data :"+out);
    }
}