#include<stdio.h>

int main()
{
    int num, *n;
    n = &num;
    
    printf("%p\n",n);
    *n++;
    printf("%p\n",n);

    return 0;
}