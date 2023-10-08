#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char ch;

    for(i=6; ;i+=6)
    {
        printf("%d\nMore? (Y/N)",i);
        ch=getche();
        if(ch=='N') 
        {
            break;
        }
        printf("\n");
    }

    return 0;
}