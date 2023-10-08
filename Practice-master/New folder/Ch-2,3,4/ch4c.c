#include<stdio.h>

void f1(void), f2(void);

int main()
{
    f1();

    return 0;
}

void f1(void)
{
    int count;
    for(count=0; count<10; count++)
    {
        f2();
        printf("\n");
    }
}

void f2(void)
{
    int count;
    for(count=0; count<10; count++)
    {
        printf("%d ",count);
    }
}