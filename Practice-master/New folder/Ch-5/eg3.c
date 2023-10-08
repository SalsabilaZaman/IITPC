#include<stdio.h>
#include<stdlib.h>

int main()
{
    int item[20], i, j, temp, count;
    
    printf("Enter the total numbers : \n");
    scanf("%d",&count);
    
    printf("Enter the numbers : \n");
    for(i=0; i<count; i++)
    {
        scanf("%d",&item[i]);
    }
    printf("\n");
    
    for(i=1; i<count; i++)
    {
        for(j=count-1; j>=i; j--)
        {
            if (item[j-1]>item[j])
            {
                temp = item[j-1];
                item[j-1] = item[j];
                item[j] = temp;
            }
            
        }
    }
    printf("Sorted:Ascending :\n");
    for(i=0; i<count; i++)
    {
       printf("%d\n",item[i]); 
    }

    return 0;
}