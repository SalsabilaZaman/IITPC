package may9;

public class MyMain {

	public static void main(String[] args) 
	{
		Bank b1 = new Bank();
		
		Account user1 = new SavingsAccount(5000);
		
		Account user2 = new CurrentAccount(5000);
		
		b1.addAcc(user1);
		b1.addAcc(user2);
		
//		user1.withdraw(4800);
//		System.out.println("User1 has : " + user1.getBalance() + " " + user1.getAccID());
//		
//		user2.withdraw(4800);
//		System.out.println("User2 has : " + user2.getBalance()+ " " + user2.getAccID());
//		
		
		//System.out.println(user2);
		b1.printList();
		
		user1.update();
		
		b1.printList();
		

	}

}
