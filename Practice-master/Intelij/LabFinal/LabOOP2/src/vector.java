import javax.sound.midi.Soundbank;
import java.sql.SQLOutput;
import java.util.NoSuchElementException;
import java.util.Vector;

public class vector
{
    private static  final String colors[] = {"Red", "White", "Blue" } ;

    public vector()
    {
        Vector<String> vect = new Vector<String>() ;

        for ( String color : colors )
        {
            vect.add( color );
        }

        printVector( vect );


        try
        {
            System.out.printf("First element : %s \n", vect.firstElement());
            System.out.printf("Last element : %s \n", vect.lastElement());
        }
        catch ( NoSuchElementException exception )
        {
            exception.printStackTrace();
        }

        if ( vect.contains("Red") )
        {
            System.out.printf("\n\"Red\" found at : %d", vect.indexOf("Red") );
        }
        else
        {
            System.out.println("\n\"Red\" not found.");
        }

        vect.remove("Red") ;
        System.out.println("\"Red\" has been removed.");

        printVector( vect );

        if ( vect.contains("Red") )
        {
            System.out.printf("\n\"Red\" found at : %d", vect.indexOf("Red") );
        }
        else
        {
            System.out.println("\n\"Red\" not found.");
        }

        System.out.printf("\nSize : %d\nCapacity : %d\n",vect.size(),vect.capacity() );

    }

    private void printVector(Vector<String> vect )
    {
        if( vect.isEmpty() )
            System.out.println("Vector is empty.!");
        else
        {
            System.out.print("Vector contains : ");
            for (String element : vect )
            {
                System.out.printf("%s ",element);
            }
        }
        System.out.println();
    }

    public static void main(String[] args)
    {
        new vector() ;
    }
}
