#include<stdio.h>
#include<conio.h>

int main()
{
    char i;
    printf("Enter the key : ");
    i=getche();
    printf("\n");
    
    switch (i)
    {
    case '\t':
        printf("Tab\n");
        break;
    case '\n':
        printf("Newline\n");
        break;
    case '\b':
        printf("Backspace.\n");
        break;
    
    default:
        printf("Ohers.\n");
        break;
    }

    return 0;
}