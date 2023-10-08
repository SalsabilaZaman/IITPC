#include<stdio.h>
int main()
{
    float num;
    int select;
    printf("Enter the value : ");
    scanf("%f",&num);

    printf("1. Feet to Meter.\n2. Meter to Feet.\n");
    scanf("%d",&select);

    if(select==1) {printf("Equivalent value : %.2f",num/3.28);}
    else if(select==2) {printf("Equivalent value : %.2f",num*3.28);}
    else {printf("Invalid ");
        printf("Choice.");
        }

}