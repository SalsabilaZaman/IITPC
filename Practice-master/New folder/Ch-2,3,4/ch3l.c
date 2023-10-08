#include<stdio.h>
int main()
{
    int ans, count, chance;

    for (count=1; count<11; count++)
    {
        printf("%d + %d = ",count,count);
        scanf("%d",&ans);
        for(chance=1; chance<=3; chance++)
        {
            if(ans==count+count)
            {
                printf("Right!!\n");
                break;
            }
            else
            {
                printf("Wrong!! Try again.\n");
                scanf("%d",&ans);
            }
            
        }       
        printf("Correct Answer = %d\n",count+count);    
           
    }    
        
    return 0;
}