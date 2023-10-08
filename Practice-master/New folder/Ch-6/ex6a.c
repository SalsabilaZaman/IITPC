#include<stdio.h>
#include<string.h>

int main()
{
    int num, *n, **l;
    num = 13;
    n = &num;
    l = &n;

    printf("%p\n",n);
    printf("%p\n",l);
    printf("%p\n",&l);

    return 0;
} 