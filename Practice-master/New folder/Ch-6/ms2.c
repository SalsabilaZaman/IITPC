#include<stdio.h>

int main()
{
    int num, *n;
    n = &num;
    printf("Enter the number : ");
    scanf("%d",n);
    printf("%d",num);

    return 0;
}