#include<stdio.h>

int main()
{
    float arr[]= {12.34, 13.54, 9.8, 4.8, 15.9, 17.6, 8.4};
    int n= sizeof(arr)/ sizeof(arr[0]);

    int i, j; float swap;

    for (i=0; i<n-1; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(arr[j]< arr[j+1])
            {
                swap = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = swap;
            }
        }
    }

    for (i=0; i<n; i++) 
    {
        printf("%f\n", arr[i]);
    }
    return 0;
}