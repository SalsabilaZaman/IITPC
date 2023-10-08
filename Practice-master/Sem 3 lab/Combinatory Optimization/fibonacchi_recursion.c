#include<stdio.h>

long long arr[100] ;

long long fib(int n)
{
    if ( arr[n] )
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
    for (int i = 0; i < 3; i++)
    {
        int n ;
        printf("Enter the term :");
        scanf("%d", &n);

        printf("%lld\n", fib(n));
    }
    
}