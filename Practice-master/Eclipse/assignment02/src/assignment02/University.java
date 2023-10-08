package assignment02;
import java.util.*;

public class University 
{
	ArrayList<Person> user;


	public University(ArrayList<Person> user) 
	{
		this.user = user ;
	}
	
	

	public void getFullName()
	{
		for(Person x: user)
		{
			System.out.print( x.firstName + " " + x.lastName + ", " );
		}
	}
	
	public Person getOldestPerson()
	{
		Person temp = user.get(0) ;
		for(Person x: user)
		{
			if( x.getAge() > temp.getAge() ) temp = x;
		}
		
		return temp ;
	}
	
	public Person getYoungestPerson()
	{
		Person temp = user.get(0) ;
		for(Person x: user)
		{
			if( x.getAge() < temp.getAge() ) temp = x;
		}
		
		return temp ;	
	}
	
	public ArrayList<Person> getVoters()
	{
		ArrayList<Person> voter = new ArrayList<Person>();
		
		for(Person x: user)
		{
			if( x.age > 17 )
			{
				voter.add(x);
			}
		}
		
		return voter;
		
	}
	
	public int getNumberOfEmployees()
	{
		int number = 0 ;
		
		for(Person x: user)
		{
			String s = x.getFullName();
			

			if( s.contains("Employee")  )
			{
				number++;
			}
		}
		return number ;
	}

	
	
	
	
	

}
