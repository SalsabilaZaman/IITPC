#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main()
{
    clock_t s_time, e_time;
    s_time = clock() ;
    printf("Start time - %ld\n",s_time);
    int i, j, temp=0, n;
    scanf("%d",&n);
    int at[n];
    for ( i = 0; i < n; i++)
    {
        at[i]=rand()%n;
    }
    
    for(j=0; j<n; j++)             // j<n-1
    {   
        for(i=0; i<n ;i++)
        {
            if(at[i]>at[i+1])
            {
                temp=at[i];
                at[i]=at[i+1];
                at[i+1]=temp;
            }        
        }
    }
    //decending
    for(i=0; i<n; i++ )
    printf("%d\n",at[i]);

    e_time = clock() ;
    printf("End time - %ld",e_time);

    // //ascending
    // for(i=20; i>=0; i-- )
    // printf("%d\n",at[i]);

    return 0;
}
