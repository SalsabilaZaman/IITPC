#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//    .........   Not Ok   ........... 

void divide(int arr[], int n);
void m_sort(int arr[], int temp[], int left, int right);
void merge(int arr[], int temp[], int left, int rightf, int right );

void divide(int arr[], int n)
{
    int temp[n];
    m_sort(arr, temp, 0, n-1);
}

void m_sort(int arr[], int temp[], int left, int right)
{
    int center ;
    if(left<right)
    {
        center =(left+right)/2 ;
        m_sort(arr, temp, left, center);
        m_sort(arr, temp, center+1, right);
        merge(arr, temp, left, center+1, right);
    }
}

void merge(int arr[], int temp[], int left, int rightf, int right )
{
    int leftend , tmp, num;
    leftend = rightf-1;
    tmp = left;
    num = right-left+1;
    
    while(left<=leftend && rightf<=right)
    {
        if(arr[left] <= arr[rightf])
        {
            temp[tmp++] = arr[left++];
        }
        else
        {
            temp[tmp++] = arr[rightf++];
        }
    }
    while (left<=leftend)
    {
        temp[tmp++] = arr[left++];
    }

    while (rightf<=right)
    {
        temp[tmp++] = arr[rightf++];
    }
    
    for(int i=0; i<num; i++)
    {
        arr[right] = temp[right];
        right -- ;
    }

}

int main()
{
    clock_t s_time, e_time, t;
    s_time = clock() ;
    printf("Start time - %ld\n",s_time);
    
    int n;
    printf("Enter number of data : ");
    scanf("%d",&n);
    int arr[n];
    int temp[n];

    for (int i = 0; i < n; i++)
    {
        arr[i]=rand()%n;
        printf("%d\t",arr[i]);
    }
    
    
    //divide(arr, n);
    m_sort(arr, temp, 0, n-1);

    for(int i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }

    e_time = clock() ;
    printf("End time - %ld\n",e_time);
    t = (e_time-s_time)/CLOCKS_PER_SEC;
    printf("Total time - %ld",t);

}