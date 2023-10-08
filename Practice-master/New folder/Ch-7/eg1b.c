#include<stdio.h>

float getnum(void)
{
    float a;
    printf("Enter a number : ");
    scanf("%f",&a);
    return a;
}

int main()
{
    float x;
    x=getnum();        //call func. without argument..
    printf("%f",x);

    return 0;
}