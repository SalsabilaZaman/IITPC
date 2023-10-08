#include<stdio.h>
#include<string.h>

 void print_reverse(char *p, int n);
//void reverse(char *p);

int main(int argC, char *argV[])
{
    int l = strlen(argV[1]);
    print_reverse(argV[1],l);
    return 0;
}

void print_reverse(char *p, int n)
{
    if (n>0)
    printf("%c", p[n-1]);
    print_reverse(p, n-1);
}
