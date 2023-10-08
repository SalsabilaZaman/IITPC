#include<stdio.h>
int main()
{
    int i, j, k;
    i=10;
    j=i++;
    k=++i;

    printf("%d\n%d\n%d\n", i, j, k);
    
    return 0;
}