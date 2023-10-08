package may2;

import java.util.ArrayList;
import java.util.Arrays;
public class ArryListExercise 
{
	public static void main(String[] args) 
	{
		ArrayList<String> namesList = new ArrayList<String>();
		namesList.add("John");
		namesList.add("Mary");
		namesList.add("Peter");
		System.out.println("Size of the list: " + namesList.size());
		System.out.println("Element at index 1: " + namesList.get(1));
		
		namesList.set(1, "David");
		System.out.println("Modified element at index 1: " +
		namesList.get(1));
		namesList.remove(2);
		String[] namesArray = namesList.toArray(new String[0]);
		System.out.println("List: " + namesList);
		System.out.println("Array: " + Arrays.toString(namesArray));
	}
}