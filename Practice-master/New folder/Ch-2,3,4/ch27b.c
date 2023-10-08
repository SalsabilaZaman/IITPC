#include<stdio.h>
int main()
{
    int i;
    printf("Enter an Integer : ");
    scanf("%d",&i);
    for(i; i>=0; i--)
    {
        printf("Num=%d.\n",i);
    }
    printf("\a");
    return 0;
}
