#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char command[80], temp[80];
    char k;
    int i,j;

    for( ; ; )
    {
        printf("Operation : ");
        gets(command);
        if (!strcmp(command,"Quit"))break;
        printf("Enter first number : ");
        gets(temp);
        i = atoi(temp);
        printf("Enter second number : ");
        gets(temp);
        j = atoi(temp);

        if (!strcmp(command,"Add")) printf("%d\n",i+j);
        else if (!strcmp(command,"Subtruct")) printf("%d\n",i-j);
        else if (!strcmp(command,"Multiply")) printf("%d\n",i*j);
        else if (!strcmp(command,"Divide")) printf("%f\n",(float)i/j);
        else printf("Unknown Operator.\n");       
    }
    return 0;
}