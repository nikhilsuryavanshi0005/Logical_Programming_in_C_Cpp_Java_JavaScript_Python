import java.util.*;

public class program296 
{
    public static void main(String A[]) 
    {
        Vector <String>vobj = new Vector<String>();

        vobj.add("C");
        vobj.add("C++");
        vobj.add("Java");
        vobj.add("Python");
        vobj.add("CSharp");
        vobj.add("Java");

        System.out.println(vobj);

        vobj.add(2,"LSP");
        System.out.println(vobj);

        System.out.println(vobj.capacity());

        System.out.println(vobj.contains("LSP"));
        System.out.println(vobj.contains("Unix"));

        vobj.remove(6);

        System.out.println(vobj);
        
    }   
}
