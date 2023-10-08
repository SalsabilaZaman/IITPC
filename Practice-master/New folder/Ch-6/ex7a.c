#include<stdio.h>

void my_strcat( char *to, char *from)
{
    while(*to)
    {
        *to++ ;
    }
    while(*from)
    {
        *to++ = *from++ ;
    }
    *to = '\0';
    
}

int main()
{
    char from[] = {"My name is Khan."};
    char to[100] = {"Hello ! "};
    my_strcat( to, from );

    printf(to);
    printf("\n");

    return 0;
} 