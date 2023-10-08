#include<stdio.h>
#include<math.h>
#define ESP 10.0e-6
#define f(x) (x*x*x+4*x*x-5)

double a , b , c ;
int i = 1, root = 1 ;

void checkBound();
void bisection();

int main()
{
    double diff, temp;
    printf("Enter the bounds : ");
    scanf("%lf %lf",&a , &c );
    diff = ( c - a )/6 ;
    temp = a ;
    for (int i = 0; i < 6; i++)
    { 
        a = temp + (diff)*i ;
        c = temp + (diff)*(i+1) ;
        //printf("%lf %lf\n",a, c);
        checkBound();
    }
    
    //printf("%lf  %lf", f(a), f(c));
    // printf("--------------------------------------------------------------------\n");
    // printf("Iter\t A\t    B\t      C\t       f(a)\t   f(b)\t      f(c)\n");
    // printf("--------------------------------------------------------------------\n");
    //checkBound();

}

void checkBound()
{
    if( f(a)*f(c) > 0 )
    {
        //printf("Root doesn't exist in this range.\n");
    }
    else
    {
        bisection();
    }
}

void bisection()
{
    //printf("%2d %10.6lf %10.6lf %10.6lf %10.6lf %10.6lf %10.6lf\n", i, a, b, c, f(a), f(b), f(c) );
    i++;
    b = (a+c)/2 ;
    if( fabs(f(b)) < ESP )
    {
        //printf("%2d %10.6lf %10.6lf %10.6lf %10.6lf %10.6lf %10.6lf\n", i, a, b, c, f(a), f(b), f(c) );
        printf("The root-%d is %lf .\n", root, b );
        root++ ;
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