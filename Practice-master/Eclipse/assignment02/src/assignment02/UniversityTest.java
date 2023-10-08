package assignment02;

import java.util.*;

public class UniversityTest 
{

	public static void main(String[] args) 
	{ 
		ArrayList <Person> person = new ArrayList<Person>() ;
		person.add( new Student("shaikhul", "islam", 23));
		person.add( new Student("farhan", "islam", 13));
		person.add( new Employee("nazeeb", "islam", 22));
		
		University admitted = new University(person);

		for(Person x: person)
		{ 
			System.out.println(x.toString());
		}
		
		admitted.getFullName();
		System.out.println("Total Employee : " + admitted.getNumberOfEmployees() );
		System.out.println("Oldest person : " + admitted.getOldestPerson() );
		System.out.println("Youngest person : " + admitted.getYoungestPerson() );
		System.out.println("Total Voter : " + admitted.getVoters() );
		
	}
	
	

}
