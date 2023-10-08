#include<stdio.h>

int max;
void f1();

int main()
{
    max=100;
    f1();
    printf("Max in main: %d",max);

    return 0;
}

void f1()
{
    int max=150;
    printf("Max in f1: %d\n",max);
}
