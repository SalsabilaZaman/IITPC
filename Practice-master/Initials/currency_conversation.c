#include<stdio.h>
float convert(float a);
int main()
{
    float n, d;
    printf("Enter pound amount : ");
    scanf("%f",&n);
    printf("Dollar = %.2f * $2 : %.2f dollar",n,convert(n));
}
float convert(float a)
{
    float c;
    c=a*2;
    return c;
}
