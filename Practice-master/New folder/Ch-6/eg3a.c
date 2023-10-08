#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[50], *p;
    printf("Enter the string : ");
    gets(str);
    for (int i = 0 ; str[i] ; i++)
    {
        str[i] = toupper(str[i]);
    }
    printf(str);
    printf("\n");

    p=str;
    for ( ; *p ; p++)
    {
        *p = tolower(*p);
    }
    printf(str);
     
    
    return 0;
} 