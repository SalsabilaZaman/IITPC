#include<stdio.h>

int main()
{
    char str[80];
    int i, space, *s;
    s = &space;
    printf("Enter the string : ");
    gets(str);

    *s = 0;
    for( i=0; str[i]; i++ )
    {
        if(str[i]==' ') (*s)++;
    }
    
    printf("Number of space : %d",*s);

    return 0;
}