#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("Enter the letters : \n");

    for( ; ; )
    { 
        ch=getche();
        if(ch=='\r')
        {
            break;
        }
        printf("\n%c\n",ch-32);
        
    }
}