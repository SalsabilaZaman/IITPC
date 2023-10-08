#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter a number(0/1) : ");
    scanf("%d",&i);
    printf("Enter a number(0/1) : ");
    scanf("%d",&j);
    
    printf("P AND Q : %d\n",i&&j);
    printf("P OR Q : %d\n",i||j);
    printf("P X-OR Q : %d\n",(i||j)&&!(i&&j));

    return 0;
}