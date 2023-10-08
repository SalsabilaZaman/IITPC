#include<stdio.h>
#include<math.h>

#define f(x) ( (x)*(x) + 1 )

int main ()
{
    double res = 0, a, b, n, d ;

    printf("Enter a, b, n : ");
    scanf("%lf%lf%lf", &a, &b, &n );
    double Fx[(int)n+1] ;
    Fx[0] = f(a) ;
    Fx[(int)n] = f(b) ;
    
    d = (b-a)/n ;
    res = f(a) + f(b) ;
    for ( int i = 1; i < n; i++ )
    {
        Fx[i]= f( a + i*d ) ;
        if( i%2 == 0 ) res += (2*f( a + i*d )) ;
        else res += (4*f( a + i*d )) ;
    }
    
    res = (res*d)/3 ;

    printf("Simpson’s 1/3 Rule: \nThe integrated value : %lf\n", res);

    for ( int i = 0; i <= n; i++ )
    {
        printf("%d. %.2lf -> %lf \n", i, a+i*d, Fx[i] );
    }
}