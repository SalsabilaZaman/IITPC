#include<stdio.h>

int my_strlen(char s[]);

int main()
{  
    char str1[50];
    printf("Enter a string: ");
    gets(str1);
    
    int x=  my_strlen(str1);
    printf("%d\n", x);
}

int my_strlen(char s[])
{
    int i, l;
    for(i=0; s[i]; i++);
    l = i;
    return l;
}
