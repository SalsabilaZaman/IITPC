#include<stdio.h>
#include<string.h>

int main()
{
    char str[2][20];
    int i;
    strcpy(str[0], "Hello");
    strcpy(str[1], "World");
    for(i=0; i<2; i++)
    {
        printf("%s ",str[i]);
    }
}