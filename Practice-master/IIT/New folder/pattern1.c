#include<stdio.h>
int main()
{
    int line,c_line,column;
    printf("Enter the line number : ");
    scanf("%d",&line);

    /*for(int i=1; i<=line; i++)
    {
        for(c_line=1; c_line<=i; c_line++)
        {
            printf("*");
        }
        printf("\n");
    }*/

    for(int i=line; i>=1; i--)
    {
        for(c_line=1; c_line<=i; c_line++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}