#include<stdio.h>
#include<math.h>

int main()
{
    int T;
    double area, r, pi;
    pi=2*acos(0.0);
    scanf("%d",&T);
    
    for(int i=0; i<T; i++)
    {
        scanf("%lf",&r);
        area = ((4-pi)*r*r);
        printf("Case %d: %.2lf\n",i+1,area);
    }

    return 0;
}