#include<stdio.h>
int fact(int f);
int main()
{
    int f;
    double factorial;
    printf("Enter the number : ");
    scanf("%d",&f);
    factorial=fact(f);
    printf("The factorial of %d is : %.1lf",f,factorial);
    return 0;
}

int fact(int f)
{
    int factn , fact1;

    if(f==0)
    {
        return 1;
    }
    fact1=fact(f-1);
    factn=f*fact1;
    return factn;
}