#include<stdio.h>

int count;
int *init(int x)
{
    count = x;
    return &count;
}

int main()
{
    int *p;
    p=init(110);
    printf("Count through p : %d",*p);

    return 0;
}