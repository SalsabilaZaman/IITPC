#include<stdio.h>

void countsort(int arr[], int n)
{
    int k=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(k<arr[i]) k = arr[i];
    }

    
    int count[k+1];
    for(int i=0;i<=k;i++) count[i]=0;

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 0; i <= k; i++)
    {
        count [i]+=count[i-1];
    }

    int output[n];
    for (int i = n-1; i >=0; i--)
    {
        output[--count[arr[i]]]=arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i]=output[i];
    }
    
}


int main()
{
    int arr[]={3,21,15,5,3,2,4,20,80,4,9,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    countsort(arr,size);

    for (int i = 0; i < size; i++)
    {
        printf("%d  ",arr[i]);
    }
    
}