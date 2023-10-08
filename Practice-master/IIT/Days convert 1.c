#include<stdio.h>
int main()
{int d;
    printf("Enter the days count : ");
    scanf("%d",&d);
    int x=d/365;
    int y=(d%365)/30;
    int z=(d-x*365-y*30);
    printf("Years  = %d\n",x);
    printf("Months = %d\n",y);
    printf("Days   = %d\n",z);
    return 0;

}
