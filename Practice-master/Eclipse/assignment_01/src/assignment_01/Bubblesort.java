package assignment_01;

public class Bubblesort 
{
	public static void main(String[] args) 
	{
		int i, j, l;
		int arr[] = {12,14,13,25,28,20,22,15,26,24,19,23};
		l= arr.length;
		
		for(i=0; i<l; i++)
		{
			for(j=i+1; j<l; j++)
			{
				if(arr[i]>arr[j])
				{
					swap(arr, i, j);
				}
			}
		}

		System.out.println("Sorted Array:");
		for(i=0; i<l; i++)
		{
			System.out.println(arr[i]);
		}
	}
	
	public static void swap(int arr[], int i, int j)
	{
		int temp ;
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

}
