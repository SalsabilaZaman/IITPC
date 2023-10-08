#include<stdio.h>

int main()
{
    int temp[31];
    int days, i, min=200, max=0, avg=0;

    printf("How many days in the month : ");
    scanf("%d",&days);

    for(i=0; i<days; i++)
    {
        printf("Enter the  midday temperature for day-%d : ",i+1);
        scanf("%d",&temp[i]);
        avg = avg + temp[i];
        if(temp[i]>max) max=temp[i];
        if(temp[i]<min) min=temp[i];
    }
    printf("Average Temp : %f\n",(float)avg/days);
    printf("Maximum Temp : %d\n",max);
    printf("Minimum Temp : %d\n",min);

    return 0;
}