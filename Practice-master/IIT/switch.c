#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Choice:");
    ch=getchar();
    switch (ch)
    {
    case 'L': load();
        break;
    case 'S': save();
        break;
    case 'D': display();
        break;
    case 'E': enter();
        break;    
    default: quit();
        break;
    }
}