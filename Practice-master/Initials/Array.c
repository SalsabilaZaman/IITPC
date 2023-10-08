#include<stdio.h>
int main ()
{
    int i,n, total=0;
    
    printf("Enter the range: ");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        printf("Enter marks of roll-%d : ",i+1);
        scanf("%d",&num[i]);
        total=total+num[i];
    }
    printf("Total=%d\n",total);
    printf("Average=%d\n",(float)total/(i+1));

}