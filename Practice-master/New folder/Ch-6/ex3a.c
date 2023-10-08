#include<stdio.h>

int main()
{
    char str[100];
    char *st;
    st = &str;

    printf("Enter a string : ");
    gets(str);

    while (*st!=' ')
    {
        *st++;
    }
    *st++;
    
    while (*st!='\0')
    {
        printf("%c",*st);
        *st++;
    }
    
    return 0;
} 