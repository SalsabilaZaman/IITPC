public class recursion_Ascending 
{
    public static boolean isSorted( int arr[], int idx)
    {
        if (idx == arr.length-1) 
        {
            return true;   
        }

        if (arr[idx] < arr[idx+1]) 
        {
            isSorted(arr, idx+1);
            return true;   
        }
        else
        {
            return false;
        }
        
        
    }  

    public static void main(String[] args) 
    {
        int arr[] = { 2, 4, 7, 8, 10 };
        System.out.println(isSorted(arr, 0));
    }
}
