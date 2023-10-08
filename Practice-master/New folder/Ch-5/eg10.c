#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char str[10][50];

    for(i=0; i<10; i++)
    {
        printf("Enter the string-%d : ",i+1);
        gets(str[i]);
    }

    do
    {
        printf("Enter the string number(1-10) : ");
        scanf("%d",&i);

        if(i>0 && i<=10)
        {
            printf("The string-%d is : %s.\n",i,str[i-1]);
        }
        if(i>10 || i==0)
        {
            printf("Invalid number.\n");
        }
    }  
    while (i>=0);
    
    return 0;
}