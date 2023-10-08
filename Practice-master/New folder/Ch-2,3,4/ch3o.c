#include<stdio.h>
int main()
{
    double num1,num2;
    char opr;
    printf("Enter a number : ");
    scanf("%lf", &num1);
    printf("Enter an operator : ");
    scanf(" %c", &opr);
    printf("Enter a number : ");
    scanf("%lf", &num2);

    switch(opr)
    {   
        case '+':
        {
            printf("Answer : %.2lf\n", num1+num2);
            break;
        }
        case '-':
        {
            printf("Answer : %.2lf\n", num1-num2);
            break;
        }
        case '*':
        {
            printf("Answer : %.2lf\n", num1*num2);
            break;
        }
        case '/':
        {
            printf("Answer : %.2lf\n", num1/num2);
            break;
        }
        default :
        {
            printf("Invalid operator\n"); 
            break;
        }
           
    }

    return 0;
}