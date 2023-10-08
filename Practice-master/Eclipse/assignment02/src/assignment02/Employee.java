package assignment02;

public class Employee extends Person
{

	public Employee(String firstName, String lastName, int age) 
	{
		super(firstName, lastName, age);
	}
	
	@Override
	public String getFullName()
	{
		String fullName = super.firstName + " " + super.lastName + " (Employee)" ;
		return fullName ;
	}
	

}
