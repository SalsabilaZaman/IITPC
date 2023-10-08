#include<stdio.h>
#include<string.h>

int main()
{
    char str[40]= "I like Football.\n";
    printf(str);

    strcpy(str,"Hello, It's Basketball.");
    printf(str);    
    
    return 0;
}