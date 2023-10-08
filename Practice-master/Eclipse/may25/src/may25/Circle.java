package may25;

public class Circle extends Shape
{
	final double pi = 3.1416 ;
	
	public Circle( double side ) 
	{
		super.side = side;
	}

	@Override
	void calcArea()
	{
		System.out.println( "Area of the circle : " + 3.1416*super.side*super.side );	 
	}
	
}
