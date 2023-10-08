#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char ch;
    ch='a';
    for(i=0; ch!='m'; i++)
    {
         printf("Pass: %d\n",i);
         ch=getche();
    }
    printf("\nFound the m.");
    return 0;
}