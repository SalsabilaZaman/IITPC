package assignment_2;

public class Book 
{
	public String title;
	public String author;
	public String ISBN;
	public int copies;

	public Book( String ttl, String auth, String IS, int Cop)
	{
	
		title = ttl;
		author = auth;
		ISBN = IS ;
		copies = Cop;
	}
	

	void display() 
	{
		System.out.print( title + " Written by : ");
		System.out.print( author + " ISBN no : ");
		System.out.print( ISBN + " remains - ");
		System.out.println( copies + " copies");
		
	}

	void borrow()
	{
		this.copies--;
	}

	void returnBook()
	{
		this.copies++;
	}

	
}
