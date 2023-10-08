package may9;

public abstract class Account implements Update, Closeable
{
	private double balance;
	private String accID;
	private double intRate;
	public String accountTag;
	//private String userName;
	
	public static int next = 1001;
	
	public Account (double balance)
	{
		this.balance = balance ;
		//this.userName = Name ;
		this.accountTag = this.generateAccountTag();
		this.accID  = this.accountTag + next++;
	}
	public void applyInterest()
	{
		balance += balance*intRate ;
	}
	public void withdraw (double amount)
	{
		balance -= amount ;
	}
	public double getBalance()
	{
		return balance ;
	}
	
	public void setIntRate(double intRate) {
		this.intRate = intRate;
	}
	public String getAccID() 
	{
		return accID;
	}
	
	
	
	@Override
	public String toString() 
	{
		return  "Account ID = " + accID + " " + "Account balance = " + balance   ;
	}
	
	protected abstract String generateAccountTag();
	
	@Override 
	public void update()
	{
		this.balance = 0 ;
	}
	
	@Override
	public void ban()
	{	
		balance = 0;
		accID = "";
		intRate = 0;
		accountTag = "";
	}
		

}
