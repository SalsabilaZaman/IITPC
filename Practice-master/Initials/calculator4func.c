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

    if(opr == '+')
        {printf("Answer : %lf\n", num1+num2);}
    else if(opr == '-')
        {printf("Answer : %lf\n", num1-num2);}
    else if(opr == '*')
        {printf("Answer : %lf\n", num1*num2);}
    else if(opr == '/')
        {printf("Answer : %lf\n", num1/num2);}
    else {printf("Invalid operator\n");
         }


    return 0;
}
