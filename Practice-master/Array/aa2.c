#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, num, temp, loc;
    int at[]={10,11,11,13,17,19,20,22,25,28};
    printf("Inserting Number : ");
    scanf("%d",&num);
    
    for(i=0; i<10 ;i++)
    {
        if(at[i]>num)
        {
            loc=i;break;
        }
    }    
    for(i=10; i>=loc; i--)
    {
        at[i]=at[i-1];      
    }
    at[loc]=num;

    for(i=0; i<11; i++ )
    printf("%d\n",at[i]);

    return 0;
}