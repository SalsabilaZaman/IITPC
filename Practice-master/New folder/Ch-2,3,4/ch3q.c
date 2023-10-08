#include<stdio.h>
int main()
{
    int i=1;
    again :
        printf("%d\n",i);
        i++;
        if(i<11) goto again;

    return 0;
}