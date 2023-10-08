#include<stdio.h>

int main()
{
    int i,j;
    int arr[4][5];

    for(i=0 ; i<4 ; i++ )
    {
        printf("Quarter-%d:\n",i+1);
        for( j=0 ; j<5 ; j++ )
        {
            printf("Player-%d scored:",j+1);
            scanf("%d",&arr[i][j]);
        }       
    }

    printf("Quarters:  ");
    for(i=0 ; i<4 ; i++ )printf("Qrtr-%d:  ",i+1);

    printf("\n");
    for( j=0 ; j<5 ; j++ )
    {
        printf("Player-%d:\t",j+1);
        for( i=0 ; i<4 ; i++ )
        {
            printf("%d\t",arr[i][j]);
        }       
        printf("\n");
    }

    return 0;
}