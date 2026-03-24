import java.util.Scanner;

class program852 {
    
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String Str = null;

        System.out.println("Enter the String :");
        Str = sobj.nextLine();

        Str = Str.trim();
        String Arr[] = Str.split(" ");

        Str = Str.replaceAll("\\s+"," ");
        System.out.println(Str);
        System.out.println(Str.length());
    }
}