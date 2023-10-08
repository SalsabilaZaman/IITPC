package may2;
import java.util.*;


public class Exercise01 
{	

	public static void main(String[] args) 
	{
		ArrayList<Customer> namesList = new ArrayList<Customer>();
		Scanner sc = new Scanner(System.in);
		Customer people;
		for(int j=0; j<3; j++)
		{
			System.out.println("Please enter the customer information string:");
			
			String input = sc.nextLine();
			String[] arrOfStr = input.split(",");
			
			ArrayList<String> data = new ArrayList<String>();
			
			for(int i=0; i<arrOfStr.length; i++ )
			{
				data.add(arrOfStr[i]);
			}
			people = new Customer(data);
			
			namesList.add(j, people);
			
			
		}
		
		for(int j=0; j<3; j++)
		{
			if(namesList.get(j).name.charAt(0) == 'A')
			System.out.println(namesList.get(j).toString());
		}
		
	}

}
