#include<stdio.h>
#include<conio.h>
int main()
{
    int total, i, j;
    total=0;
    do
    {
        printf("Enter a number(0 to stop) : ");
        scanf("%d",&i);
        printf("Enter the number again : ");
        scanf("%d",&j);

        if(i!=j) 
        {
            printf("Mismatch.\n");
            continue;
        }

        total=total+i;
    } while (i);

    printf("Total = %d\n", total);
    
    return 0;
}