#include<stdio.h>

int getachar()        //he higher bits of int is zero so no problem in converting them in char..
{
    return 'a';
}

int main()
{
    char c;
    c=getachar();
    printf("%c",c);

    return 0;
}