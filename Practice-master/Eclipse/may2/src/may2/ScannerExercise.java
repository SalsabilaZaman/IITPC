package may2;
import java.util.Scanner;

public class ScannerExercise 
{
	public static void main(String[] args) 
	{
		Scanner scanner = new Scanner(System.in);
		System.out.print("Enter a string: ");
		String strInput = scanner.next();
		System.out.print("Enter an integer: ");
		int intInput = scanner.nextInt();
		System.out.print("Enter a double: ");
		double doubleInput = scanner.nextDouble();
		System.out.println("String input: " + strInput);
		System.out.println("Integer input: " + intInput);
		System.out.println("Double input: " + doubleInput);
		scanner.close();
	}

}
