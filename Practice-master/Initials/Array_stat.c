#include<stdio.h>
#include<stdlib.h>
int main()
{
    int range, max=0, min=100, f1=0,f2=0,f3=0, total=0;
    float avg;
    printf("Enter the range : ");
    scanf("%d",&range);
    int num[range];

    for(int i=0; i<range; i++)
    {
        printf("Number of roll-%d : ",i+1);
        scanf("%d",&num[i]);
        total=total+num[i];
        if(max<num[i]) max=num[i];
        if(min>num[i]) min=num[i];
        if(num[i]>=80) f1++;
        if(num[i]>=70 && num[i]<80) f2++;
        if(num[i]<70) f3++;
    }
    avg=total/range;

    printf("Maximum Number : %d\n",max);
    printf("Minimum Number : %d\n",min);
    printf("Average Number : %.2f\n",avg);
    printf("Got A+ : %d\n", f1);
    printf("Got A  : %d\n", f2);
    printf("Got other grades : %d\n", f3);

    return 0;
}
