#include<stdio.h>
#include<math.h>
#define EPS 10.0e-6
#define f(x) ((x)*(x)*(x)+4*(x)*(x)-10)
//#define g(x) ((x)*(x)*(x)+4*(x)*(x)+(x)-10)
// #define g(x) (10-4*(x)*(x))/((x)*(x))
// #define g(x) (10-(x)*(x)*(x))/(4*(x))
#define g(x) sqrt((10-(x)*(x)*(x))/(4))

double a, b ;
int i = 1 ;

void checkBound();
void fixedPosition();

int main()
{
    printf("Enter the initial : ");
    scanf("%lf",&a );
    
    printf("----------------------------------------------------------\n");
    printf("Iter\t A\t   B\t     g(a)\t f(b)\n");
    printf("----------------------------------------------------------\n");
    //checkBound();
    fixedPosition();

}

// void checkBound()
// {
//     if( f(a) > 0 )
//     {
//         printf("Root doesn't exist in this range.");
//     }
//     else
//     {
//         printf("%2d %10.6lf %10.6lf %10.6lf %10.6lf\n", i, a, b, g(a), f(b) );
//         fixedPosition();
//     }
// }

void fixedPosition()
{
    i++;
    b = g(a) ;
    printf("%2d %10.6lf %10.6lf %10.6lf %10.6lf\n", i, a, b, g(a), f(b) );
    
    if( fabs(f(b)) < EPS )
    {
        printf("The root is %lf .\n", b );
    }
    else 
    {
        a = b ;
        fixedPosition();
    }
   
    return;
}