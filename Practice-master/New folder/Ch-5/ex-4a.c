#include<stdio.h>
#include<math.h>

int main()
{
    int i,j, arr[10][3];

    for(i=0 ; i<10 ; i++ )
    {
        for( j=0 ; j<3 ; j++ )
        {
            arr[i][j] = pow(i+1,j+1) ;
        }      
    }

    
    for(i=0 ; i<10 ; i++ )
    {
        for( j=0 ; j<3 ; j++ )
        {
            printf("%d\t",arr[i][j]);  
        }      
        printf("\n"); 
    }

    return 0;
}