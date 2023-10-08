package march7;

public class GroceryListExample {
	public static void main(String[] args) {

//		int numItems = 4;
//		String[] itemNames = { "apples", "bananas", "bread", "milk" };
//		int[] itemQuantities = { 3, 2, 1, 2 };
//		float[] itemPrices = { 1.99f, 0.99f, 2.49f, 2.39f };
//		boolean[] itemOnSale = { false, false, true, true };
//		
//		int n = itemNames.length + 1 ;
//		String []arr = new String[n] ;
//		
//		for(int i=0 ; i < numItems; i++ )
//		{
//			arr[i] = itemNames[i]; 
//		}
//		 
//		String newName = "Biscuit";
//		
//		for(int i=0 ; i < numItems+1; i++ )
//		{
//			if(i>=3) 
//			{
//				String temp = arr[i];
//				arr[i] = newName;
//				newName = temp ;
//			}
//			
//		}
//
//		System.out.println("Grocery List:");
//
//		for (int i = 0; i < numItems; i++) 
//		{
//
//			System.out.print("- " + arr[i] + ": ");
//			System.out.print(itemQuantities[i] + " x ");
//			System.out.print("$" + itemPrices[i] + " = ");
//			double itemTotal = itemQuantities[i] * itemPrices[i];
//			System.out.print("$" + itemTotal);
//			if (itemOnSale[i]) {
//				System.out.print(" (on sale!)");
//			}
//			System.out.println();
//		}
//		
//		int i=1;
//		String search = "mil";
//		for(String x: arr)
//		{
//			if(x==search)
//			{
//				System.out.println("Found the element at index : "+i);
//				i=0;
//				break;
//			}
//			i++;
//		}
//		if(i!=0) System.out.println("Element not found.");
		
		Item[] items = new Item[4];
		
		items[0] = new Item();
		items[1] = new Item();
		items[2] = new Item();
		items[3] = new Item();
		
		items[0].names = "A";
		items[1].names = "B";
		items[2].names = "C";
		items[3].names = "D";
		
		items[0].quantities = 5;
		items[1].quantities = 3;
		items[2].quantities = 6;
		items[3].quantities = 4;
		
		for(Item x:items)
		{
			System.out.print(x.names+" ");
			System.out.println(x.quantities);
		}
		
	}
}
