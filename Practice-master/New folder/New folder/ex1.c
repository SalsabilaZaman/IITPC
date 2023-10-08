#include<stdio.h>

int cmp(int *a , int *b)
{
    if (*a > *b) printf("The greater number is %d.\n",*a);
    if (*b > *a) printf("The greater number is %d.\n",*b);
    if (*a == *b) printf("The numbers are equal.\n");
}

int main()
{ 
    int x=6, y=8;
    cmp(&x,&y);
    return 0;
}