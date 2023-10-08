package may2;

import java.util.*;

public class Customer 
{
	String name;
	private String email;
	private String phone;
	private String address;
	
	public Customer( ArrayList <String> data)
	{
		this.name = data.get(0).trim();
		this.email = data.get(1).trim();
		this.phone = data.get(2).replaceAll("[^a-zA-Z0-9]", "").trim();  //"[^\\d]"-> remove everything except numbers
		this.address = data.get(3).trim();
	}
	
	@Override
	public String toString() 
	{
		String str = String.format("Customer Name:%s \nEmail Address:%s \nPhone Number:%s \n", name, email, phone);
		return str  ;
	}
	

}
