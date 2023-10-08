#include<stdio.h>

int recuse(int x)
{
    if(x<10)
    {
        printf("%d\n",x);    // 0-9
        recuse(x+1);
        //printf("%d\n",x);  // 9-0

    }
}

int main()
{
    recuse(0);

    return 0;
}