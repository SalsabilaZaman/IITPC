#include<stdio.h>

int main()
{
    int i,j,k,l, count=1, sum=0, arr[3][3][3], num[3][3][3];
    
    for(i=0; i<3; i++)
    {
        for( j=0 ; j<3 ; j++ )
        {
            for( k=0 ; k<3 ; k++ )
            {
                for( ; ;count++)
                {
                    if(count%5==0 && count%6==0)
                    {
                        num[i][j][k]=count;
                        count++;
                        break;
                    }
                }
            }
        }
    }

    l=0;
    for(i=0 ; i<3 ; i++ )
    {
        for( j=0 ; j<3 ; j++ )
        {
            for( k=0 ; k<3 ; k++ )
            {
                arr[i][j][k] = num[i][j][k] ;
                sum = sum + num[i][j][k];
            } 
        }      
    }

    
    for(i=0 ; i<3 ; i++ )
    {
        for( j=0 ; j<3 ; j++ )
        {
            for( k=0 ; k<3 ; k++ )
            {
                printf("%d ",arr[i][j][k]);
            }
        }       
    }
    printf("\nSum=%d.",sum);

    return 0;
}