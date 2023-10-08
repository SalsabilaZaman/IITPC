#include<stdio.h>

void my_strcpy( char *to, char *from)
{
    while(*from)
    {
        *to++ = *from++;
    }
    *to = '\0';
}

int main()
{
    char from[] = {"My name is Khan."};
    char to[50];
    my_strcpy( to, from );

    printf(to);
    printf("\n");
    printf(from);

    return 0;
} 