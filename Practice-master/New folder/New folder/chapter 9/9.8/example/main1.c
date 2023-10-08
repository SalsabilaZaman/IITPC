#include<stdio.h>
#include<string.h>

int main()
{
    char str[80];
    int i;

    printf("Enter string: ");
    fgets(str, 10, stdin);

    i=strlen(str)-1;
    if(str[i]=='\n')
        str[i]= '\0';
    printf(str);
    return 0;
}
