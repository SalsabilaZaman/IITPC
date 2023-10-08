#include<stdio.h>
#include<math.h>
#define EPS 10.0e-6
#define f(x) (x*x*x+4*x*x-10)
#define g(x) (3*x*x+8*x)

double a, b ;
int i = 1 ;

void checkBound();
void bisection();

int main()
{
    printf("Enter the initial : ");
    scanf("%lf",&a );
    
    printf("----------------------------------------------------------\n");
    printf("Iter\t A\t   B\t     f(a)\t f(b)\n");
    printf("----------------------------------------------------------\n");
    //checkBound();
    bisection();

}

void checkBound()
{
    if( f(a) > 0 )
    {
        printf("Root doesn't exist in this range.");
    }
    else
    {
        printf("%2d %10.6lf %10.6lf %10.6lf %10.6lf\n", i, a, b, f(a), f(b) );
        bisection();
    }
}

void bisection()
{
    
    b = a - f(a)/g(a) ;
    printf("%2d %10.6lf %10.6lf %10.6lf %10.6lf\n", i, a, b, f(a), f(b) );
    i++;
    if( fabs(f(b)) < EPS )
    {
        printf("The root is %lf .\n", b );
    }
    else 
    {
        a = b ;
        bisection();
    }
   
    return;
}