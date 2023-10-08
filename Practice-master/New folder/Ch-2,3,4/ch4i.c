#include<stdio.h>

int x=10;
int func(int i);

int main()
{
    int y=x;
    int z=func(y);

    printf("%d \n%d",y,z);

    return 0;
}

int func(int i)
{
    return i/2;
}