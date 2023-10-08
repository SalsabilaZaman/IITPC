#include<stdio.h>
#include<conio.h>
int main()
{
    int ch;
    printf("Enter the character : ");
    ch=getche();
    printf("\n");
    
    while (ch!='s')
    {
        ch=getche();
        printf("\n");
    }
    printf("Found the s.\n");
    
    return 0;
}