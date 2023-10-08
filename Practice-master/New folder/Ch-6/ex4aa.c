#include<stdio.h>
int main()
{
    int a=1,b=2,c=3,k=0,i;
    for(i=0;i<6;i++)
    {
        printf("%d %d %d\n",a,b,c);
        if(k==0)
        {
            int d=a;
           a=b;
           b=d;
           k=1;
        }
        else if(k==1)
        {
               int d=b;
           b=c;
           c=d;
           k=0;
        }
    }
}