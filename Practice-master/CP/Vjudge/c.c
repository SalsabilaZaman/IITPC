#include<stdio.h>
#include<stdlib.h>

int main()
{
    int T, N, i, j, k;

    scanf("%d",&T);
    int b[T];
    
    for( i=0; i<T; i++)
    {
        printf("\n");
        scanf("%d",&N);
        char a[N][2];
        k=0;
        b[i] = 0;
        for( j=0; j<N; j++)
        {
            scanf("%d",&a[j]);
            k=atoi(&a[j]);
            b[i] = b[i] + k;
        }
    }
    for(i=0; i<T; i++)
    {
        printf("Case %d: %d\n",i+1,b[i]);
    }

    return 0;
}