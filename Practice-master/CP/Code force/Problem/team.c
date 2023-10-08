#include<stdio.h>
int main()
{
    int n, c, i, j, k, t=0;
    scanf("%d",&n);
    for(c=0 ; c<n ; c++)
    { 
        scanf("%d %d %d",&i,&j,&k);      
        if(i+j+k>1) t++;
    }
    printf("%d",t);
    return 0;
}