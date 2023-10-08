#include<stdio.h>
#include<stdlib.h>

long long arr[100]  ;

long long fib(int n)
{
    if ( arr[n] > -1 )
    {
        return arr[n];
    }

    if ( n <= 1 )
    {
        arr[n] = n ;
        return n ;
    }


    arr[n] =  fib(n-1) + fib(n-2) ;
    
    return arr[n]; 
}

int main()
{
    int n ;
    for ( int i = 0; i < 100; i++)
    {
        arr[i] = -1 ;
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the term :");
        scanf("%d", &n);
        printf("%lld\n", fib(n));
    }

    printf("Enter the length :");
    scanf("%d", &n);
    fib(n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i] );     
    }
    
    
}