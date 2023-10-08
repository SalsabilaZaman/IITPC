#include<stdio.h>

int main()
{
    int i,j,k, count=1, sum=0, arr[3][3][3];

    for(i=0 ; i<3 ; i++ )
    {
        for( j=0 ; j<3 ; j++ )
        {
            for( k=0 ; k<3 ; k++ )
            {
                arr[i][j][k] = count ;
                sum = sum + count;
                count++;
                
            } 
        }      
    }

    
    for(i=0 ; i<3 ; i++ )
    {
        for( j=0 ; j<3 ; j++ )
        {
            for( k=0 ; k<3 ; k++ )
            {
                printf("%d\t",arr[i][j][k]);
            }
            printf("\n");
        }       
    }
    printf("\nSum=%d.",sum);

    return 0;
}