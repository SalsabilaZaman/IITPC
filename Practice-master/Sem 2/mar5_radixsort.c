#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void countsort( int arr[], int n, int pos);
int find_max(int arr[], int n);
int radixsort(int arr[], int n);


void countsort( int arr[], int n, int pos)
{
    int result[n+1];
    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        count[(arr[i]/pos)%10]++;
    }
    for (int i = 0; i < 10; i++)
    {
        count[i] += count[i-1];
    }
    
    
}

int find_max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max) max=arr[i];
    }
    return max;
}

int radixsort(int arr[], int n)
{
    int max = find_max(arr, n);

    for (int pos = 1 ; max/pos > 0; pos*=10)
    {
        countsort(arr, n, pos);
    }

}

int digit(int num)
{
    int c=1;

}

int main()
{
    int n, max=0, i;
    scanf("%d",&n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        //scanf("%d",&num[i]);
        num[i] = rand()%n;
        printf("%d\n",num[i]);
    }
    printf("\n");
    radixsort(num, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d \n",num[i]);
    }

    return 0;
}