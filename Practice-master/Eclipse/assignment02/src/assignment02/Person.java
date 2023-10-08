package assignment02;

public class Person 
{
	String firstName;
	String lastName;
    protected int age;
	
	public Person(String firstName, String lastName, int age) 
	{
		this.firstName = firstName;
		this.lastName = lastName;
		this.age = age;
	}

	public int getAge()
	{
		return age;
	}

	public void setAge(int age)
	{
		this.age = age;
	}
	
	public String getFullName()
	{
		String fullName = this.firstName + " " + this.lastName ;
		return fullName ;
	}
	
	public Boolean canVote()
	{
		return this.getAge() >=18;
		
	}
	
	@Override
	public String toString() 
	{
		return "Name: " + getFullName() + ", Age: " + age;
	}

}
