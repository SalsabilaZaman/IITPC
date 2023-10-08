#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
     printf("Enter the character .");
    for(ch=getche(); ch!='m'; ch=getche())
    {
         printf("\n");
    }
    printf("\nFound the m.");
    return 0;
}