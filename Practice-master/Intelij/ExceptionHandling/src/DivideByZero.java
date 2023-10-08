import java.util.Scanner;

public class DivideByZero
{
    public static int quotient( int numerator, int denominator )
    {
        return numerator/denominator ;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the Numerator :");
        int nummerator = scanner.nextInt() ;
        System.out.print("Enter the Denominator :");
        int denominator = scanner.nextInt() ;

        int result = quotient( nummerator, denominator );
        System.out.printf("\nResult : %d / %d = %d\n",nummerator, denominator, result );
    }
}
