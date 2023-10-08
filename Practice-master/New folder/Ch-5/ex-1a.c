#include<stdio.h>

int main()
{
    int arr[]={7,5,10,13,17,36,28,35,40,50,48,75,41};
    int a,i,count;
    printf("Enter The Numbers : ");
    for(a=1; a<=10; a++)
    {
        scanf("%d",&i);
        count=0;
        for (int j=0 ; j < 13 ; j++)
        {
            if(i==arr[j])
            {
                printf("Matched.\n");
                count++;
            }
        }
        if(count==0)printf("Not matched.\n");
    }
    return 0;
}