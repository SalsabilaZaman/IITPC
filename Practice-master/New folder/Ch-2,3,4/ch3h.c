#include<stdio.h>
#include<conio.h>
int main()
{
    int ch;
    printf("Enter the character : \n");
    ch=getche();
    printf("\n");
    
    while (ch!='\r')
    {
        printf("%c\n",ch+1);
        ch=getche();
        printf("\n");
    }
    
    return 0;
}