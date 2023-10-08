package may9;

public class CurrentAccount extends Account
{

	public CurrentAccount(double balance) {
		super(balance);
		super.setIntRate( 0.00 );
	}
	
	@Override
	protected String generateAccountTag() 
	{
		return "Current" ;
	}
	
	

}
