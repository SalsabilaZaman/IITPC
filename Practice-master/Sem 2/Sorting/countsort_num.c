// countsort
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int find_max( int arr[], int n );
void countsort( int arr[], int n );

int main()
{
    srand(time(0));
    double s_time, e_time;
    int n, i;
    scanf("%d",&n);
    int num[n];
    for ( i = 0; i < n; i++)
    {
        //scanf("%d",&num[i]);
        num[i] = rand()%(n);
        printf("%d  ",num[i]);
    }
    printf("\n");
    s_time = clock();
    printf("\n");

    countsort(num, n);

    for ( i = 0; i < n; i++)
    {
        printf("%d  ",num[i]);
    }
    e_time = clock();
    printf("\n%f", e_time-s_time);

    return 0;
}

int find_max( int arr[], int n )
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max) max=arr[i];
    }
    return max;
}

void countsort( int arr[], int n )
{
    int max = find_max(arr, n);
    int i, j;

    //int *count = (int*) malloc((max+1)*sizeof(int));

    int count[max+1];
    
    for ( i = 0; i < max+1 ; i++)    // (int*) calloc((max+1)*sizeof(int))
    {
        count[i] = 0 ;
    }

    for ( i = 0; i < n ; i++)
    {
        count[arr[i]]++ ;
    }

    i=0, j=0 ;
    while ( i <= max )
    {
        if ( count[i]>0 )
        {
            arr[j] = i ;
            count[i] -- ;
            j++; 
        }
        else i++;
    }
    
}



// void countsort(int arr[], int n)
// {
//     int k=arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if(k<arr[i]) k = arr[i];
//     }

    
//     int count[k+1];
//     for(int i=0;i<=k;i++) count[i]=0;

//     for (int i = 0; i < n; i++)
//     {
//         count[arr[i]]++;
//     }

//     for (int i = 0; i <= k; i++)
//     {
//         count [i]+=count[i-1];
//     }

//     int output[n];
//     for (int i = n-1; i >=0; i--)
//     {
//         output[--count[arr[i]]]=arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         arr[i]=output[i];
//     }
    
// }


// int main()
// {
//     int arr[]={3,21,15,5,3,2,4,20,80,4,9,4};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     countsort(arr,size);

//     for (int i = 0; i < size; i++)
//     {
//         printf("%d  ",arr[i]);
//     }
    
// }