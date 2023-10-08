#include<stdio.h>
int main()
{
    int i, num;
    printf("Enter a number : ");
    scanf("%d",num);

    for ( i = num; i >= num; i--)
    {
        printf("%d\n",i);
    }
    printf("\a");
    return 0;
}