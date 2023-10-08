#include<stdio.h>
float square(float a);
int main()
{
    float num;
    printf("Enter number : ");
    scanf("%f",&num);
    printf("Square of the number : %f",square(num));
}
float square(float a)
{
    float sqr;
    sqr=a*a;
    return sqr;
}
