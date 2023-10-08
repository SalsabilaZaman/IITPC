#include<stdio.h>
#include<conio.h>

int main()
{
    int mess[80],i;
    
    printf("Enter the message (less than 80 char) : \n");
    
    for(i=0; i<80; i++)
    {
        mess[i]=getche();
        if(mess[i]=='\r') break;
    }

    printf("\n");
    for(i=0; mess[i]!='\r'; i++)
    {
        printf("%c",mess[i]+1);
    }
    
    return 0;
}