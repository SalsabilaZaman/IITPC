#include<stdio.h>
int main()
{
    float length, bredth;
    int s;

    printf("Enter the shape : \n1.Circle. 2.Rectangle. 3.Triangle.\n");
    scanf("%d",&s);

    if(s==1)
    {
        printf("Enter radius : ");
        scanf("%f",length);
        printf("Area = %.2f",3.1416*length*length);
    }
    else if (s==2)
    {
        printf("Enter length & breadth : ");
        scanf("%f,%f",length,bredth);
        printf("Area=%.2f",length*bredth);
    }
    else if (s==3)
    {
        printf("Enter base & height : ");
        scanf("%f,%f",length,bredth);
        printf("Area=%f",0.5*length*length);
    }
    else
    {
        printf("Invalid Shape.");
    }

    return 0;
}
