#include<stdio.h>
int main()
{
    int num, i, checker=0;
    printf("Enter the number : ");
    scanf("%d",&num);

    /*for(i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            checker=1; 
            break;
        }
    }

    if (checker==1)
    {
        printf("The number is not prime.");
    }
    else 
    {
        printf("The number is prime.");
    }*/
    
    for(i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            break;
        }
    }

    if (i<num/2)
    {
        printf("The number is not prime.");
    }
    else 
    {
        printf("The number is prime.");
    }

    return 0;
}