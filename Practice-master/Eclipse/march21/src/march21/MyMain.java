package march21;

public class MyMain {

	public static void main(String[] args) 
	{
		
		
		Product p1 = new Product("Product A", 10.0, 5);
		Product p2 = new Product("Product B", 20.0, 5);
		
		double pr1 = p1.calculateTotalPrice(5,.25) ;
		double pr2 = p2.calculateTotalPrice(5,.25) ;
		
		System.out.println( p1.calculateTotalPrice(5,.25) );
		System.out.println( p2.calculateTotalPrice(5,.25) );
		p1.updateProduct(p2);
		System.out.println( p1.calculateTotalPrice(5,.25) );
		System.out.println( p2.calculateTotalPrice(5,.25) );

	}

}
