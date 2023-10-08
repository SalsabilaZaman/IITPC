import java.util.ArrayList;
import java.util.Collection;
import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        UsingArrays u1 = new UsingArrays();
        u1.printArrays();
        u1.printEquality();

        int location = u1.searchForInt(5 );
        if( location >= 0 )
        {
            System.out.printf("Found 5 element %d in intArray\n", location );
        }
        else
        {
            System.out.println("5 not found in intArray.");
        }

        location = u1.searchForInt(128 );
        if( location >= 0 )
        {
            System.out.printf("Found 128 a element %d in intArray\n", location );
        }
        else
        {
            System.out.println("128 not found in intArray.");
        }

        List<String> a = new ArrayList<String>() ;
        a.add("Hello ");
        a.add("I am ");
        a.add("Baymax. ");
        a.add("Your PHA.");

        System.out.println(a);
        Iterator itr = a.iterator();
        while( itr.hasNext() )
        {
            System.out.print(itr.next());
        }
        System.out.println(itr.next());


    }
}