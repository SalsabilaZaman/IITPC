#include<stdio.h>

int series(int a);
int i;

int main()
{
    int j;
    i=21;
    for(j=1; j<11; j++)
    {
        i=series(i);
    }
}

int series(int a)
{
    i=(a*1468)%467;
    printf("%d\n",i);
    
    return i;
}