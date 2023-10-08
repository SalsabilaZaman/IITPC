#include<stdio.h>
int main()
{
    int i, num, diff;
    printf("Enter last limit : ");
    scanf("%d",&num);
     printf("Enter the difference : ");
    scanf("%d",&diff);

    for ( i = 1; i <= num; i+=diff)
    {
        printf("%d\n",i);
    }

    return 0;
}