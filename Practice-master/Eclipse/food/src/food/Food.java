package food;

public abstract class Food implements Halal,Haram
{
	@Override
	public void print()
	{
		System.out.println("The food is permiseable.");
	}
	
	@Override
	public void pH_value()
	{
		System.out.println("pH in betweeen 6-8 .");
	}

	public void consumedBy() 
	{
		
	}
}
