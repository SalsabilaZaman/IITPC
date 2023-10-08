#include<stdio.h>
int main()
{
    int line,c_line,column;
    printf("Enter the line number : ");
    scanf("%d",&line);

    for(c_line=1; c_line<=line; c_line++)
    {
        for(column=c_line; column<=line-1; column++)
        {
            printf(" ");
        }

        for(column=1; column<=(2*c_line-1); column++)
        {
            printf("*");
        }
        printf("\n");
    }

    /*for(c_line=line; c_line>=1; c_line--)
    {
        for(column=c_line; column<=line-1; column++)
        {
            printf(" ");
        }

        for(column=1; column<=(2*c_line-1); column++)
        {
            printf("*");
        }
        printf("\n");
    }*/
    
    return 0;
}