#include<stdio.h>

int o_to_c();

int main()
{
    int o;
    printf("Enter ounce number : ");
    scanf("%d",&o);
    printf("Number of Full cup = %d\n",o_to_c(o));
    return 0;
}

int o_to_c(int a)
{
    int cup;
    cup=a/8;
    return cup;
}