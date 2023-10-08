#include<stdio.h>
#include<conio.h>
int main()
{
    int num, temp, i, j;
    printf("Enter total num : ");
    scanf("%d",&num);
    char arr[num];
    printf("Enter the letters : ");
    for(i=0; i<num; i++)
    {
        printf("\n");
        arr[i]=getche();
    }
    for(j=0; j<num; j++)
    {
        for(i=0; i<num-j; i++)
        {
            if (arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    printf("\n\n");
    for(i=0; i<num; i++)
    {
        printf("%c\n",arr[i]);
    }
    return 0;
}