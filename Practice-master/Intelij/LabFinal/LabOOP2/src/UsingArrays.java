import java.util.Arrays;

public class UsingArrays
{
    private int intArr[] = {1,2,3,4,5,6};
    private double doubleArr[] = {8.4, 9.3, 0.2, 7.9, 3.4};
    private int filledArr[], intArrCopy[];

    public UsingArrays()
    {
        filledArr = new int [10] ;
        intArrCopy = new int [intArr.length] ;

        Arrays.fill(filledArr, 7);
        Arrays.sort(doubleArr);

        System.arraycopy(intArr, 0, intArrCopy, 0, intArr.length );
    }

    public void printArrays()
    {
        System.out.println("\nDouble Array : ");
        for ( double doubleValue : doubleArr )
            System.out.printf("%.1f ", doubleValue );
        System.out.println("\nInt Array : ");
        for ( int intValue : intArr )
            System.out.printf("%d ", intValue );
        System.out.println("\nFilled Array : ");
        for ( int Value : filledArr )
            System.out.printf("%d ", Value );
        System.out.println("\nCopied Array :");
        for ( int Value : intArrCopy )
            System.out.printf("%d ", Value );
        System.out.println();
    }

    public int searchForInt ( int value )
    {
        return Arrays.binarySearch( intArr, value );
    }

    public void printEquality()
    {
        boolean b = Arrays.equals( intArr, intArrCopy );
        System.out.printf("intArr %s intArrCopy \n", ( b ? "==" : "!=" ) );
        b = Arrays.equals( intArr, filledArr );
        System.out.printf("intArr %s filledArr \n", ( b ? "==" : "!=" ) );
    }
}
