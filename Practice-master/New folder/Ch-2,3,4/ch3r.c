#include<stdio.h>

int main()
{
    int i;

    for(i=1; i<101; i++)
    {
        printf("At 10 percentage is : %.2f\n",i*.1);
        printf("At 15 percentage is : %.2f\n",i*.15);
        printf("At 20 percentage is : %.2f\n\n",i*.2);
    }

    return 0;
}