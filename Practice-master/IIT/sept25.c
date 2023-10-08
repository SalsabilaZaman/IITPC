#include<stdio.h>

float sum(float a,float b)
{   return a+b; }

float substuction(float a,float b)
{   return a-b; }

float multiplication(float a,float b)
{   return a*b; }

float division(float a,float b)
{   return a/b; }



float main()
{
    float a, b, Add, Sub, Product, Quotient, Remainder ;
    printf("Enter 1st Number : ");
    scanf("%f",&a);
    printf("Enter 2nd Number : ");
    scanf("%f",&b);

    Add=sum(a,b);
    Sub=substuction(a,b);
    Product=multiplication(a,b);
    Quotient=division(a,b);

    printf("Addition       : %.2f\n",Add);
    printf("Substuction    : %.2f\n",Sub);
    printf("Multiplication : %.2f\n",Product);
    printf("Quotient       : %.2f\n",Quotient);


    return(0);
}
