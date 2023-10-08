#include<stdio.h>
int main()
{
    int range,sum=0,i;
    printf("Enter the range : ");
    scanf("%d",&range);
    long long int fib[range];
    fib[0]=0;
    fib[1]=1;
    
    for(i=2;i<range;i++)
    {
        fib[i]=fib[i-2]+fib[i-1];
    }

    for(i=0;i<range;i++)
    {  
        printf("%lld\n",fib[i]);

    }
}