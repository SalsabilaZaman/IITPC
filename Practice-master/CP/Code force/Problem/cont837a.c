#include<stdio.h>

int main()
{
    int t, n, count, min, max, dif;
    scanf("%d",&t);
    if(t>=1 && t<=100)
    for( ; t>0; t--)
    {
        scanf("%d",&n);
        int a[n];
        min=100000; 
        max=0;
        if(n>=2 && n<=100000)
        {
            for(int i=0; i<n; i++)
            {
                scanf("%d",&a[i]);
                if(a[i]>max) max=a[i];
                if(a[i]<min) min=a[i];
            }
            dif = max-min;
            count=0;

            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(i!=j && ((a[i]-a[j])==dif || (a[i]-a[j])==dif*(-1)) )
                    count++;
                }
            }
            printf("%d\n",count);
        }
    }

    return 0;
}