import java.util.InputMismatchException;
import java.util.Scanner;

public class DivideZeroExceptionHandling
{
    public static int quotient( int numerator, int denominator ) throws ArithmeticException
    {
        return numerator/denominator ;
    }

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        boolean continueLoop = true ;
        do
        {
            try
            {
                System.out.print("Enter the Numerator :");
                int nummerator = scanner.nextInt() ;
                System.out.print("Enter the Denominator :");
                int denominator = scanner.nextInt() ;
                int result = quotient( nummerator, denominator );
                System.out.printf("\nResult : %d / %d = %d\n",nummerator, denominator, result );
                continueLoop = false ;
            }
            catch ( InputMismatchException inpMisExp )
            {
                System.err.printf("Exception : %s \n", inpMisExp );
                scanner.nextLine();
                System.out.println("You must enter an integer. Please try again.");
            }
            catch ( ArithmeticException artExp )
            {
                System.err.printf("Exception : %s \n", artExp );
                System.out.println("Zero is an invalid denominator. please try again.");
            }
            finally
            {
                System.out.println("It's okay. Mathematics is magic !!");
            }

        }while ( continueLoop );



    }
}
