#include<stdio.h>
#include<stdlib.h>

int main()
{
    float temp, item[20];
    int i, j,  count;
    
    printf("Enter the amount of numbers : ");
    scanf("%d",&count);
    
    printf("Enter the numbers : \n");
    for(i=0; i<count; i++)
    {
        scanf("%f",&item[i]);
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
       printf("%.2f\n",item[i]); 
    }

    return 0;
}