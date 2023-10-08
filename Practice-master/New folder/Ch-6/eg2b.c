#include<stdio.h>

int main()
{
    int i, *ip;

    i=5;
    ip=&i;

    printf("%d\n%p\n",i,ip);
    *ip++;
    
    printf("%d\n%p\n",i,ip);
    (*ip)++;
    
    printf("\n");
    printf("%d\n%p\n",*ip,ip);
    
    return 0;
} 
      /* important*/