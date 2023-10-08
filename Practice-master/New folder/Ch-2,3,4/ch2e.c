#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer : ");
    scanf("%d",&num);

    if(num<0) printf("The number %d is a negative integer.",num);
    else printf("The number %d is a non-negative integer.",num);

    return 0;
}