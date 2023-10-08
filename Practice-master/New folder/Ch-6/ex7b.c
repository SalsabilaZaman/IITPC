#include<stdio.h>

void my_cng( int *k)
{
    *k=-1;  
}

int main()
{
    int i=10;
    int *j=&i;
    printf("%d\n",i);

    my_cng( j );

    printf("%d",i);

    return 0;
} 