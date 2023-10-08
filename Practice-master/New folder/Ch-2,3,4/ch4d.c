#include<stdio.h>

int main()
{
    int i;
    for(i=1; i<10; i++)
    {
        if(i==5)
        {
            int j;
            j=i*10;
            printf("%d\n",j);
        }
    }

    //printf("%d",j);  undeclared outside the function.

    return 0;
}