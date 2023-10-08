#include<stdio.h>

int rev(int *a)
{
    for(int i=9; i>=0; i--) 
    printf("%d \n",a[i]);
    
}

int main()
{ 
    int x[10]={2,3,12,20,6,7,8,5,10,13};
    rev(x);
    return 0;
}