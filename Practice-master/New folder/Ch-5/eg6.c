#include<stdio.h>

int main()
{
    int i,j, arr[5][6];

    for(i=0 ; i<5 ; i++ )
    {
        for( j=0 ; j<6 ; j++ )
        {
            arr[i][j] = (i+1)*(j+1) ;
        }       
    }

    
    for(i=0 ; i<5 ; i++ )
    {
        for( j=0 ; j<6 ; j++ )
        {
            printf("%d\t",arr[i][j]);
        }       
        printf("\n");
    }

    return 0;
}