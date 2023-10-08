#include<stdio.h>

int main()
{
    int N, K, i, j;
    
    scanf("%d%d",&N,&K);
    int arr1[N];
    i=0;
    while(i<N)
    {
        scanf("%d",&arr1[i]);
        i++;
    }
    
    i=0;
    while(i<K)
    {
        j=0;
        while(j<N)
        {
            arr1[j]=arr1[j+1];
            j++;
        }
        arr1[N-1]=0;
        i++;

    }

    for(i=0;i<N; i++)
    {
        printf("%d ",arr1[i]);
    }
   
    return 0;
}