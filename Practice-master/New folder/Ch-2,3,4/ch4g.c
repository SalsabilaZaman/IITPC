#include<stdio.h>
#include<math.h>

double power(int i,int j);

int main()
{
    int b, p;
    double res;
    printf("Enter the base & power : \n");
    scanf("%d%d",&b,&p);
    res=power(b,p);
    printf("%d^%d = %.0lf",b,p,res);
    //printf("%d",pow(b,p));

    return 0;
}

double power(int i, int j)
{
    double total=1;
    for( ; j>0 ; j--)
    {
        total=total*i;
    }
    return total;
}
