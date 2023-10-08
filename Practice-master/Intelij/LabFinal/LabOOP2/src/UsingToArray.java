import java.util.Arrays;
import java.util.LinkedList;

public class UsingToArray
{
    public UsingToArray()
    {
        String color[] = {"Black", "Blue", "Yellow" };
        LinkedList<String> links = new LinkedList<String>(Arrays.asList(color));
        links.addLast("Red");
        links.add("Pink");
        links.add(3, "Green");
        links.addFirst("Cyan");

        color = links.toArray(new String[links.size()]) ;
        System.out.println("Colors: ");
        for ( String colors : color )
        {
            System.out.println(colors);
        }
    }

    public static void main(String[] args)
    {
        new UsingToArray() ;
    }
}
