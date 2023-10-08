#include<stdio.h>
#include<string.h>

int main()
{
    char word[80];
    int s;
    printf("Enter the String : ");
    gets(word);
    s=strlen(word);
    for( s ; s>=0; s--)
    {
        printf("%c",word[s]);
    }

    return 0;
}