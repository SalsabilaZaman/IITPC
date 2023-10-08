public class sorting 
{
    public static void printArray(int arr[]) 
    {
        for(int i=0; i<arr.length; i++)
        {
            System.out.println(arr[i]);
        }
    }
    public static void main(String[] args) 
    {
        int arr[] = {13,5,2,6,4};

        //bubble sort:
        // for(int i=0; i<arr.length-1; i++)
        // {
        //     for(int j=0; j<arr.length-i-1; j++)
        //     {
        //         if(arr[j]>arr[j+1])
        //         {
        //             int temp = arr[j];
        //             arr[j] = arr[j+1];
        //             arr[j+1] = temp;
        //         }
        //     }
        // }

        // printArray(arr);

        // selection sort:

        for(int i=0; i<arr.length-1; i++)
        {
            int smallest = i;
            for(int j=i+1; j<arr.length; j++)
            {
                if(arr[smallest]>arr[j])
                {
                    smallest = j;
                }
            }

            int temp = arr[smallest];
            arr[smallest] = arr[i];
            arr[i] = temp;
        }
        printArray(arr);
        
    }
    
}
