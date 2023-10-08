#include<stdio.h>
#include<conio.h>
int main(void)
{
    int i,s=0;

    for(i=1;i<=100;i=i+1)
    {   s=s+i;
    }
    printf("%d",s);
    getch();
}
