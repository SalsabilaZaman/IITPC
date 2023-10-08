#include<stdio.h>

int main()
{
    int i,server;
    int std_server[5][2]={3,45,6,76,8,67,9,76,12,56};
    
    printf("Enter server no : ");
    scanf("%d",&server);

    for(i=0 ; i<5 ; i++ )
    {
        if(server==i+1)
        {
            printf("Server-%d belongs to roll:%d who got: %d.\n",server,std_server[i][0],std_server[i][1]);
            break;
        }
    }

    if(i==5)printf("Server-%d is not listed. \n");
    
    return 0;
}