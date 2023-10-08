#include<stdio.h>
#include<math.h>

int main()
{
    double i;
    
    for(i=1.0; i<101.0; i++)
    {
        printf("Square root of %.0lf is : %lf\n",i,sqrt(i));
        printf("Whole number part : %ld\n",(long int)sqrt(i));
        printf("Fractional Part : %lf\n",sqrt(i)-(long int)sqrt(i));
        printf("\n");
    }
    return 0;
} 