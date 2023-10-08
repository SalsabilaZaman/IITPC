package march21;

public class Product {
	
	private String name;
	private double price;
	private int quantity;
	
	public Product(String name, double price, int quantity) 
	{
		this.name = name;
		this.price = price;
		this.quantity = quantity;
	}
	
	public String getName() 
	{
		return name;
	}
	
	public double getPrice() 
	{
		return price;
	}
	
	public int getQuantity() 
	{
		return quantity;
	}
	
	public double calculateTotalPrice(int quantity) 
	{
		return price * quantity;
	}
	
	public double calculateTotalPrice(double discount) 
	{
		return price * quantity * (1 - discount);
	}
	
	public double calculateTotalPrice(double taxRate, double discount) 
	{
		double totalPriceBeforeTax = price * quantity * (1 - discount);
		return totalPriceBeforeTax + totalPriceBeforeTax * taxRate;
	}
	
	public void updateProduct(Product product) 
	{
		
		if (product != null) 
		{

		this.name = product.getName();
		this.price = product.getPrice();
		this.quantity = product.getQuantity();
		}
	}
	
}
