#include<stdio.h>

void recopy(char *a, char *b)
{
    if(*b)
    {
        *a++ = *b++;    // *a=*b; a++; b++;
        recopy(a, b);
    }
    else 
    {
        *a = '\0';
    }
}

int main()
{
    char str[50];
    recopy(str, "My name is Khan.");
    printf(str);

    return 0;
}