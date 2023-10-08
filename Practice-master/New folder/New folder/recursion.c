#include<stdio.h>

int fib(int i)
{
    int fibN;
    if(i==0) 
    {
        return 0;
    }
    
    if(i==1)
    {
        return 1;
    } 

    fibN = fib(i-1) + fib(i-2);
    
    return fibN;
    
    
}

int main()
{
    int n=5, f;

    f = fib(n);
    printf("%d\n",f);

    return 0;
}