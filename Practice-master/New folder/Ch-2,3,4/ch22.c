#include<stdio.h>
int main()
{
    float num1,num2;
    int op;
    printf("Enter your number-1 : ");
    scanf("%f",&num1);
    printf("Enter your number-2 : ");
    scanf("%f",&num2);
    printf("Operation.\n1.Sum. 2.Difference. 3.Product. 4.Quotient.\n");
    scanf("%d",&op);

    if (op==1)
    {
        printf("Sum : %.2f\n",num1+num2);
    }
    if (op==2)
    {
        printf("Difference : %.2f\n",num1-num2);
    }
    if (op==3)
    {
        printf("Product : %.2f\n",num1*num2);
    }
    if (op==4)
    {
        printf("Quotient : %.2f\n",num1/num2);
    }
    
    return 0;
}