#include<stdio.h>
#include<string.h>
#include<time.h>

int main()
{
    clock_t s_time, e_time;
    s_time = clock() ;
    printf("Start time - %ld\n",s_time);
    int i, j, temp=0;
    int at[]={8,11,13,14,15,18,20,21,22,24,25,27,28,30,31,33,34,35,36,37};
    int n = sizeof(at)/sizeof(int);
    for(j=0; j<n; j++)             // j<n-1
    {   
        for(i=0; i<n-j-1 ;i++)
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
    for(i=0; i<20; i++ )
    printf("%d\n",at[i]);

    e_time = clock() ;
    printf("End time - %ld",e_time);

    // //ascending
    // for(i=20; i>=0; i-- )
    // printf("%d\n",at[i]);

    return 0;
}