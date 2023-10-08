package may9;

public class SavingsAccount extends Account
{

	public SavingsAccount(double balance) 
	{
		super(balance);
		super.setIntRate( 0.05 );
	}

	@Override
	public void withdraw(double amount) 
	{
		if( amount < getBalance()-500)
		{
			super.withdraw(amount);
		}
		else
		{
			System.err.println("Can't withdraw more than " + (getBalance()-500));
		}
	}
	
	@Override
	protected String generateAccountTag() 
	{
		return "Savings" ;
	}
	
	

}
