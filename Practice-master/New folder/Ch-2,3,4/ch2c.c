#include<stdio.h>
int main()
{
    int sum,  i, number;
    double product;
    sum=0; product=1;
    printf("Total number : ");
    scanf("%d",&number);

    for(i=1; i<=number; i++)
    {
        sum= sum+i;
        product= product*i;
    }

    printf("Sum = %d\n",sum);
    printf("Product = %.0lf\n",product);

    return 0;
}