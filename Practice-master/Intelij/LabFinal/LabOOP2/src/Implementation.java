import java.util.*;

public class Implementation
{
    private int num1[] = { 3, 13, 5, 23, 8, 4, 12 };
    private int num2[] = { 25, 17, 28, 22, 15, 18, 36, 32 };

    public Implementation()
    {
        List<Integer> list1 = new LinkedList<Integer>();
        List<Integer> list2 = new LinkedList<Integer>();

        for ( int number : num1 )
        {
            list1.add( number ) ;
        }
        for ( int number : num2 )
        {
            list2.add( number ) ;
        }

        Collections.sort(list1);
        printList( list1 );


        Collections.sort( list1);
        printList(list1);
        //printList(list2);

        int loc = Collections.binarySearch( list1, 13 );
        System.out.printf("The location of \"13\" is : %d\n", loc );

        Collections.reverse( list1 );
        printList( list1 );

        list1.addAll(list2);
        Collections.fill( list2, 13 );
        Collections.sort( list1 );
        printList(list1);
        printList(list2);

        Collections.shuffle( list1 );
        printList( list1 );

        int min = Collections.min(list1) ;
        System.out.printf("Min in list-01 : %d\n", min );

        int max = Collections.max(list1) ;
        System.out.printf("Max in list-01 : %d\n", max );

        list1.addAll(list2);
        int freq = Collections.frequency( list1, 13 );
        System.out.printf("Frequency of 13 : %d\n", freq );


        Collections.fill( list2, 19 );
        if ( Collections.disjoint( list1, list2 ) )
        {
            System.out.println("They are disjoint.");
        }
        else
            System.out.println("They are not disjoint.");

    }

    public void printList( List<Integer> list )
    {
        System.out.println("\nList:");
        for ( int number : list )
        {
            System.out.printf("%d ", number );
        }
        System.out.println();
    }

    public static void main(String[] args)
    {
        new Implementation() ;
    }
}
