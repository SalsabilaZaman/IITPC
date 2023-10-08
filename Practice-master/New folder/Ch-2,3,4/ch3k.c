#include<stdio.h>
int main()
{
    int ans, count;

    for (count=1; count<11; count++)
    {
        printf("%d + %d = ",count,count);
        scanf("%d",&ans);
        if(ans==count+count)
        {
            printf("Right!!\n");
        }
        else
        {
            printf("Wrong! Try Again...\n%d + %d = ",count,count);
            scanf("%d",&ans);

            if(ans==count+count)
            {
                printf("Right!!\n");
            }
            else
            {
                printf("Wrong!! Correct Answer = %d\n",count+count);   
            }
        }
    }
    
    return 0;
}