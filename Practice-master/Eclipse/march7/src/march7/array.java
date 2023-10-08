package march7;

public class array {

	public static void main(String[] args) {
		int arr[] = {3,4,2,6,4,6,4,3,2,7,3};
		int l = arr.length;
		for(int index=0; index < l; index++)
		{
			System.out.println(arr[index]);
		}
		arr = new int[l+1];
		for(int index=0; index < l+1; index++)
		{
			System.out.println(arr[index]);
		}
		

	}

}
