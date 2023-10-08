#include<stdio.h>

int main()
{
    int i;
    printf("Enter the number : ");
    scanf("%d",&i);
    if(i>0)
    {
        printf("The number is Positive. \n");
    }
    else
    {
        if(i<0)
        {
            printf("The number is Negative.\n");
        }
        else
        {
            printf("The number is Zero.\n");
        }
    }

    return 0;
}