package bubblesort;

public class Bubble {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arr= {1, 4, 6, 3, 9, 7, 2, 8, 3, 5};
		
		int x= arr.length;
		
		for(int i=0; i<x; i++)
		{
			for(int j=1; j<x; j++)
			{
				if(arr[j-1]> arr[j])
				{
					int temp= arr[j];
					arr[j]= arr[j-1];
					arr[j-1]= temp;
				}
			}
		}
		System.out.println("The sorted array is- ");
		for(int i=0; i<x; i++)
		{
			System.out.print(arr[i] + "\t");
		}
	}

}
