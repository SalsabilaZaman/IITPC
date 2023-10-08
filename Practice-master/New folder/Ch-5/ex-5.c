#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int j;
    char i=1, arr[10][30]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    printf("Enter the Number:");
    i=getche();
    j=atoi(&i);
    
    printf("\n%d-->%s .",j,arr[j]);  
    return 0;
}