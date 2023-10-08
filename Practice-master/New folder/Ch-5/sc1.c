#include<stdio.h>
#include<string.h>

int main()
{
    char str[80]={""};
    printf("Enter the string : \n");
    gets(str);
    
    printf("Length of the string is %d character.\n",strlen(str));
    if(strlen(str)<=80)
    {
        printf("Within the limit.\n");
        for(int i=0; i<80; i++)
        {
            printf("%c",str[i]);
        }
        printf("%c",'.');
    }
    else
    {
        printf("It exceeds the limit.\n");
    }
    

    return 0;
}