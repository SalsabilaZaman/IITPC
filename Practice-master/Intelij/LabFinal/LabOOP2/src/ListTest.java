import java.util.LinkedList;
import java.util.List;
import java.util.ListIterator;

public class ListTest
{
    private static final String colors[] = { "Black", "Yellow", "Green", "Blue", "Violet","Silver"};
    private static final String colors2[] = { "Gold", "White", "Brown", "Blue", "Grey", "Silver"};

    public ListTest()
    {
        List<String> list1 = new LinkedList<String>();
        List<String> list2 = new LinkedList<String>();

        for (String color : colors )
        {
            list1.add(color) ;
        }
        for (String color : colors2 )
        {
            list2.add(color) ;
        }
        list1.addAll(list2);
        list2 = null ;
        printList(list1);
        convertToUppercaseStrings(list1);
        printList(list1);
        System.out.println("\nDeleting elements from 4 to 7 :");
        removeItems( list1, 4 ,7 );
        printList(list1);
        printReverseList(list1);
    }

    public void printList( List<String> list )
    {
        System.out.println("\nList:");
        for ( String color : list )
        {
            System.out.printf("%s ", color );
        }
        System.out.println();
    }

    private void convertToUppercaseStrings( List<String> list )
    {
        ListIterator<String> itr = list.listIterator() ;
        while (itr.hasNext())
        {
            String color = itr.next() ;
            itr.set(color.toUpperCase());
        }
    }

    private void removeItems( List<String> list, int start, int end )
    {
        list.subList( start, end ).clear() ;
    }

    private void printReverseList( List<String> list )
    {
        ListIterator<String> itr = list.listIterator(list.size()) ;
        System.out.println("\nList:");

        while( itr.hasPrevious() )
        {
            list.add(null);
            System.out.printf("%s ", itr.previous() );
        }
    }

    public static void main(String[] args)
    {
        new ListTest();
    }
}
