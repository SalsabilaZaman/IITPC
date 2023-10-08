#include<stdio.h>
#include<math.h>
#define ESP 10.0e-6
#define f(x) (x*x*x+4*x*x-10)

double x1, x2, x3 ;
int i = 1 ;

void checkBound();
void secant();

int main()
{
    printf("Enter the bounds : ");
    scanf("%lf %lf",&x1 , &x2 );
    
    //printf("%lf  %lf", f(a), f(c));
    printf("--------------------------------------------------------------------\n");
    printf("Iter\t X1\t    X2\t      X3\tf(x1)\t  f(x2)\t   f(x3)\n");
    printf("--------------------------------------------------------------------\n");
    //checkBound();
    secant();
}

void checkBound()
{
    if( f(x1)*f(x2) > 0 )
    {
        printf("Root doesn't exist in this range.");
    }
    else
    {
        secant();
    }
}

void secant()
{
    printf("%2d %10.6lf %10.6lf %10.6lf %10.6lf %10.6lf %10.6lf\n", i, x1, x2, x3, f(x1), f(x2), f(x3) );
    i++;
    x3 = (x1*f(x2)-x2*f(x1))/(f(x2)-f(x1)) ;
    if( fabs(f(x3)) < ESP )
    {
        printf("%2d %10.6lf %10.6lf %10.6lf %10.6lf %10.6lf %10.6lf\n", i, x1, x2, x3, f(x1), f(x2), f(x3) );
        printf("The root is %lf .\n", x3 );
    }
    else
    {
        x1 = x2 ;
        x2 = x3 ;
        secant();
    }
    return;
}