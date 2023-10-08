#include<stdio.h>

int rev(char *a)
{
    for(int i=0; i<26; i++) 
    printf("%c\n",a[i]);
    
}

int main()
{ 
    char x[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    rev(x);
    return 0;
}