package assignment_2;

public class MyMain 
{

	public static void main(String[] args) 
	{
		Book b[] = new Book[5];
		
		b[0] = new Book( "The Kite Runner" , "Ab", "01" , 7 );
		b[1] = new Book( "Da Vinci Code" , "Cb", "02" , 10 );
		b[2] = new Book( "The Alchemist" , "Pb", "02" , 5 );
		
		
		
		for( int i=0; i<3 ; i++)
		{
			System.out.print( b[i].title + ". Written by : ");
			System.out.print( b[i].author + ". ISBN no : ");
			System.out.print( b[i].ISBN + ". Remains : ");
			System.out.println( b[i].copies + " copies");
		}
		
		Book s1[]= { b[1], b[2] };
		Book s2[]= { };
		Book s3[]= { b[1], b[1] };
		Book s4[]= { b[1], b[2], b[0] };
		Book s5[]= { b[0] };
		
		Student student[] = new Student[5];
		student[0] = new Student("John", 1001, 2, s1 );
        student[1] = new Student("Mary", 1002, 0, s2 );
        student[2] = new Student("Peter", 1003, 2, s3 );
        student[3] = new Student("Jane", 1004, 3, s4 );
        student[4] = new Student("David", 1005, 1, s5 );
        
        Library lib = new Library( b, student );
        
        
        for( int i=0; i<5; i++) 
        {
        		student[i].display();
        		System.out.println();
        }
        
        System.out.println();
        
        lib.borrowBook("The Kite Runner", student[2]);
        
        lib.displayBooks();
        System.out.println();
        
        for( int i=0; i<5; i++) 
        {
        		student[i].display();
        		System.out.println();
        }
        
       
	}

}
