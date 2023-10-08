#include<stdio.h>
#include<math.h>
#define ESP 10.0e-6
#define f(x) (x*x*x+4*x*x-10)

double a = 0, b = 0, c = 0 ;
int i = 1 ;

void checkBound();
void bisection();

int main()
{
    printf("Enter the bounds : ");
    scanf("%lf %lf",&a , &c );
    
    //printf("%lf  %lf", f(a), f(c));
    printf("--------------------------------------------------------------------\n");
    printf("Iter\t A\t    B\t      C\t       f(a)\t   f(b)\t      f(c)\n");
    printf("--------------------------------------------------------------------\n");
    checkBound();

}

void checkBound()
{
    if( f(a)*f(c) > 0 )
    {
        printf("Root doesn't exist in this range.");
    }
    else
    {
        bisection();
    }
}

void bisection()
{
    b = (a*f(c)-c*f(a))/(f(c)-f(a)) ;
    printf("%2d %10.6lf %10.6lf %10.6lf %10.6lf %10.6lf %10.6lf\n", i, a, b, c, f(a), f(b), f(c) );
    i++;
    if( fabs(f(b)) < ESP )
    {
        printf("The root is %lf .\n", b );
    }
    else if( f(a)*f(b) < 0 )
    {
        c = b ;
        bisection();
    }
    else
    {
        a = b ; 
        bisection();
    }
    return;
}