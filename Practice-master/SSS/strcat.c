#include<stdio.h>

void my_strcat(char *to, char *from);

int main()
{  
    char str1[80], str2[30];
    printf("Enter a string: ");
    gets(str1);
    printf("Enter another string: ");
    gets(str2);
    my_strcat(str1, str2);
    printf("%s\n", str1);
    return 0;
}

void my_strcat(char *to, char *from)
{
    while (*to) 
        to++;
    while (*from)
    {
        *to++ = *from++;   // *to=*from; to++; from++; 
    }
    *to='\0';
}