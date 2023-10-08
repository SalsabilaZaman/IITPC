#include<stdio.h>

double volume(double a, double b, double c)
{
    double vol = a*b*c;
    return vol;
}

int main()
{
    double vol;
    vol=volume(23.44,34.23,534.14);   //if more or less elemennt in argument,the programme won't compile.
    printf("%lf",vol);

    return 0;
}