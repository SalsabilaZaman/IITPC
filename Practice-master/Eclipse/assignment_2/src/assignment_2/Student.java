package assignment_2;

public class Student 
{
	String name;
	int ID;
	int borrow ;
	Book borrowed[] = new Book[20] ;
	
	Student ( String nam, int Id, int num, Book bb[])
	{		
		name = nam ;
		ID = Id ;
		borrow = num ;
		
		for( int i=0; i<num; i++ )
		{
			borrowed[i] = bb[i] ;
			//System.out.println(borrowed[i]);
		}
		
	}
	
	void display()
	{
		System.out.println("Name- " + name);
		System.out.println("ID- " + ID);
		System.out.println("Borrowed books - ");
		
		for( int i=0; i<borrow; i++ )
		{
			System.out.println( borrowed[i].title);
		}
	}
	
	void borrowBook(Book book)
	{
//		borrow++;
		borrowed[borrow] = book;
		borrow++;
		book.borrow();
	}
	
	void returnBook(Book book)
	{
		borrowed[borrow] = null;
		borrow--;
		book.returnBook();
	}
	
}
