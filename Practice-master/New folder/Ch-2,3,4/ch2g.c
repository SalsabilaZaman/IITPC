#include<stdio.h>
int main()
{
    int num, i;
    printf("Enter the number : ");
    scanf("%d",&num);

    /* i=2;
    while (i<num/2)
    {
        if(num%i==0) break;
        i++;
    }

    if(i<num/2) printf("Not Prime.");
    else printf("Prime number."); */

    i=1;
    do
    {
        i++;
    }  
    while (num%i!=0);
    if(i==num)printf("Prime number.");
    else printf("Not Prime number.");
    return 0;
}