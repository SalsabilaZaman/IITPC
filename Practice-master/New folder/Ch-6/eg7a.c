#include<stdio.h>

void my_puts(char *p)
{
    while(*p)
    {
        printf("%c",*p);
        p++; 
    }
    printf("\n");
}

int main()
{
    my_puts("This is a test.");

    return 0;
} 