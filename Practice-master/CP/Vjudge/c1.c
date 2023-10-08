#include<stdio.h>

int main()
{
    int T, N, a, b;
    scanf("%d",&T);
    
    for(int i=1; i<=T; i++)
    {
        printf("\n");
        scanf("%d",&N);
        
        for( ; N>0; N--)
        {
            scanf("%d",&a);
            if(a>=0)b = b + a;
        }
        printf("Case %d: %d\n",i,b);
        b = 0;
    }

    return 0;
}