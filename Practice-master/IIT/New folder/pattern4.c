#include<stdio.h>
int main()
{
    int line,c_line,column;
    printf("Enter the line number : ");
    scanf("%d",&line);

    for(c_line=1; c_line<=line; c_line++)
    { 
        for(column=1;column<=line;column++)
        {
            printf("*");
        }
                
        printf("\n");
    }
    
    return 0;
}