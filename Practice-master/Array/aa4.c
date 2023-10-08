#include<stdio.h>
#include<string.h>

int main()
{
    int size, i, j, num;
    printf("Enter Size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter data : \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter a num : ");
    scanf("%d",&num);
    for(i=0;i<size;i++)
    {
        if(num==arr[i])
        {
            for(i;i<size;i++)
            {
                arr[i]=arr[i+1];  
            }
            size--; 
            i=0;   
        }
        
    }
    for(j=0; j<size; j++) printf("%d ",arr[j]);

    return 0;
}