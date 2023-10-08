package assignment_2;

public class Main {

	public static void main(String[] args) 
	{
		Book b[] = new Book[3];
		
		b[0] = new Book( "The Kite Runner" , "Ab", "01" , 7 );
		b[1] = new Book( "Da Vinci Code" , "Cb", "02" , 3 );
		//b[3] = new Book( "The Alchemist" , "Pb", "02" , 5 );
		
		//Library lib = new Library(b);
		
		for( int i=0; i<3 ; i++)
		{
			System.out.print( b[i].title + ". Written by : ");
			System.out.print( b[i].author + ". ISBN no : ");
			System.out.print( b[i].ISBN + ". Remains : ");
			System.out.println( b[i].copies + " copies");
		}

	}

}
