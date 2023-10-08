#include<stdio.h>
int main()
{
    int room,j,l,b,area=0;
    printf("Enter a number of rooms : ");
    scanf("%d",&room);
    for(j=1; j<=room; j++) 
    {   
        printf("Enter the length and the bredth of room-%d : \n",j);
        scanf("%d %d",&l,&b);
        area=area+l*b;
    }
    printf("Total Area = %d",area);

    return 0;
}