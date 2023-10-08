#include<stdio.h>
#include<math.h>
#define f(x) ( (x)*(x) + 1 ) 

double fDiff( double x, double y )
{
    return ((f(y)-f(x))/(y)-(x));
}  

int main()
{
    double a, b, h ;
    double x[100], Fx[100] ;
    int n ;
    printf("Enter a, b, n : ");
    scanf("%lf %lf %d", &a, &b, &n );
    h = (b-a)/n ;
    printf("%lf %lf %d\n", a, b, n );

    for ( int i = 0; i <= n; i++ )
    {
        x[i] = a + i*h ;
        printf("%lf \n", x[i] ) ;
    }

    printf("Differential Values : \n");

    Fx[0] = fDiff( (x[0]), (x[0+1]) ) ;
    printf("%f\n", fDiff( (x[0]), (x[0+1]) ) ) ;
    for (int i = 1; i < n; i++)
    {
        Fx[i] = fDiff( (x[i-1]), (x[i+1]) ) ;
        printf("%f\n", fDiff( (x[i-1]), (x[i+1]) )) ;
    }

    Fx[n] = fDiff( (x[n]), (x[n-1]) ) ;
    printf("%f\n", fDiff( (x[n]), (x[n-1]) )) ;


    printf("\n  x        f(x)       f`(x) \n");
    for ( int i = 0; i <= n ; i++ )
    {
        printf("%lf, %lf, %lf\n", x[i], f(x[i]), Fx[i] );
    }
    


}