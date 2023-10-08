#include<stdio.h>
#include<math.h>
#define ESP 10.0e-6
#define i(x) (sqrt(x))
#define g(x) ((x)*(x))
#define f(x) (i(x)-g(x))

double s=0, a , b , c ;    // b = root
int ext, n=100 ;

void checkBound();
void bisection();
double simsonArea();

int main()
{
    printf("Enter the bounds : ");
    scanf("%lf %lf",&a , &c );

    checkBound();
    if ( ext )
    {
        printf("Area : %lf ", simsonArea( ) );
    }
    
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
    b = (a+c)/2 ;
    if( fabs(f(b)) < ESP )
    {
        printf("The root is %lf .\n", b );
        ext = 1 ;
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

double simsonArea( )
{
    double res = 0, a = 0, d ;
    
    d = (b-a)/n ;
    res = f(a) + f(b) ;

    for ( int i = 1; i < n; i++ )
    {
        if( i%2 == 0 ) res += (2*f( a + i*d )) ;
        else res += (4*f( a + i*d )) ;
    }
    
    res = fabs((res*d)/3) ;
    return res;
}