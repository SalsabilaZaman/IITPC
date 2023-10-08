package assignment_2;

public class Library 
{
	int n=5;
	Book book[] = new Book[5];
	Student borrower_std[] = new Student[n];
	
	Library ( Book b[], Student s[] )
	{ 
		for(int i=0; i<3; i++)
		{
			this.book[i] = b[i] ;
		}
		
		for( int i=0; i<n; i++ )
		{
			borrower_std[i] = s[i];
		}
	
	}
	
	
	void addBook(Book book, int i)
	{
		this.book[i] = book ;
	}
	
	void addStudent(Student student)
	{
		this.borrower_std[n++] = student;
	}
	
	void displayBooks()
	{
		for(int i=0; book[i]!=null; i++)
		{
			System.out.print( book[i].title + " Written by : ");
			System.out.print( book[i].author + " ISBN no : ");
			System.out.print( book[i].ISBN + " remains - ");
			System.out.println( book[i].copies + " copies");
		}
	}
	
	Book findBook(String title)
	{
		int i;
		for( i=0; book[i]!=null; i++)
		{
			if( title == book[i].title)
			{
				System.out.println("Found the book. ISBN no- " + book[i].ISBN);
				return book[i];
			}
		}
		if(book[i]==null) System.out.println("Couldn't find the book.");
		return null;
	}
	
	void borrowBook(String title, Student student)
	{
		int j;
		
		for( j=0; j<n; j++)
		{
			if( student == borrower_std[j])
			{
				Book b = findBook(title);
				if( b != null )
				{
					//b.borrow();
					borrower_std[j].borrowBook(b);
				}
			}
			
		}
		if(j==n) System.out.println("");
		
	}
	
	void returnBook(String title, Student student)
	{
		int j;
		
		for( j=0; j<n; j++)
		{
			if( student == borrower_std[j])
			{
				Book b = findBook(title);
				if( b != null )
				{
					//b.returnBook();
					borrower_std[j].returnBook(b);
				}
			}
			
		}
		if(j==n) System.out.println("Student not registered.");
	}

}
