#include<stdio.h>

void my_strcpy(char to[], char from[]);

int main()
{  
    char str1[20], str2[20];
    printf("Enter a string:");
    gets(str2);
    // printf("Enter another string:");
    // gets(str2);
    my_strcpy(str1, str2);
    printf("%s\n%s\n", str1, str2);
    return 0;
}

void my_strcpy(char to[], char from[])
{
    int i;
    for(i=0; from[i]; i++)
    {
        to[i] = from[i];
    }
    to[i]='\0';
}