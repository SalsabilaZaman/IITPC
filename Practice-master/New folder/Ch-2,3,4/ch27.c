#include<stdio.h>
int main()
{
    int row, column, num, i=1;
    printf("Enter total number : ");
    scanf("%d",&num);

    for(row=1; row<=num/5; row++)
    {
        for(column=i; column<i+5; column++)
        {
            printf("%d\t",column);
        }
        i=row*5+1;
        printf("\n");
    }
    return 0;
}