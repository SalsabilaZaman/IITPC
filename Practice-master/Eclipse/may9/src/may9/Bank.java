package may9;
import java.util.*;

public class Bank 
{
	private ArrayList <Account> User ;
	
	public Bank() 
	{
		this.User = new ArrayList<>();
	}
	public void addAcc( Account acc )
	{
		User.add(acc);
	}
	
	public void removeAcc( String accNum )
	{
		for( Account x : User)
		{
			if( x.getAccID() == accNum ) User.remove(x);
		}
	}

	public void printList()
	{
		for( Account x : User )
		{
			System.out.println(x);
		}
		
	}
	

}
