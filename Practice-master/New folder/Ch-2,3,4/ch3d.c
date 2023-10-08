#include<stdio.h>
int main()
{
    int i;
    printf("Enter an Integer : ");
    scanf("%d",&i);

    for( ; i; i--)
    {
        printf("%d\n",i);
    }
    
    return 0;
}