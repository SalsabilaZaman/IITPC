#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i=2; i<num; i++)
    {
        if(num%i==0) printf("%d\n",i);
    }
    
    return 0;
}