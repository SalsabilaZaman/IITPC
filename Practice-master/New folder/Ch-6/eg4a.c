#include<stdio.h>
#include<string.h>

int main()
{
    char str[80];
    char*p = "stop";
    do
    {
        printf("Enter a string : ");
        gets(str);
    }
    while (strcmp(p,str));

    return 0;
} 