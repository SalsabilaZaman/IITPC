#include<stdio.h>
int main()
{
    unsigned long int l=186000;  // specifier-%uld 
    double dis;
    printf("Enter the distance(mile) : ");
    scanf("%lf",&dis);

    printf("Time needed for light : %.2lf sec\n",dis/l);

    return 0;
}