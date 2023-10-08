#include<stdio.h>

int main()
{
    int T, a;
    scanf("%d",&T);
    
    for(int i=0; i<T; i++)
    {
        scanf("%d",&a);
        if(a<11)printf("%d %d\n",0,a-0);
        else printf("%d %d\n",10,a-10);
    }

    return 0;
}