#include<stdio.h>

int max;
void f1();

int main()
{
    max=10;
    printf("This won't work.\n");
    int i;
    i=10;
    printf("%d\n",i);
    f1();

    return 0;
}

void f1()
{
    int c;
    for ( c = 0; c < max; c++)
    {
        printf("%d\n",c);
    }
    
}