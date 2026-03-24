import java.util.Scanner;

class program855 {
    
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String Str = null;

        System.out.println("Enter the String :");
        //Step 0: Accept the String from user
        Str = sobj.nextLine();
        //Step 1: Remove the leading and trailing white spaces
       
        Str = Str.trim();

        //Step 2: Replace multiple white spaces with single white space
        Str = Str.replaceAll("\\s+"," ");

        //Step 3: Split the String into words
        String Arr[] = Str.split(" ");

       //Step 4: Display the words
        for(int i = Arr.length - 1;i >= 0;i--)
        {
            System.out.println(Arr[i]);//logic to display the words in reverse order
        }
    }
}