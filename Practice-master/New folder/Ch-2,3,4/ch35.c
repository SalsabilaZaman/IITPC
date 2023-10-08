#include<stdio.h>
int main()
{
    float lit,gal;
    do
    {
        printf("Enter gallon amount (Press 0 to exit) : ");
        scanf("%f",&gal);
        lit=gal*3.7854;
        if(gal!=0) printf("Equivalent : %.3f liter.\n",lit);
    } while (gal!=0);
    
    return 0;
}