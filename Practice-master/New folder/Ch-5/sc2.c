#include<stdio.h>
#include<string.h>

int main()
{
    int len, i;
    char str[200]={""};
    printf("Enter the string : \n");
    gets(str);
    len = strlen(str);

    if(len%2==0)
    {
        for( i=1 ; i<=len/2 ; i++ )
        {
            printf("%c",str[i-1]);
            printf("%c",str[len-i]);
        }
    }
    else
    { 
        for( i=1 ; i<=(len+1)/2 ; i++ )
        {
            printf("%c",str[i-1]);
            printf("%c",str[len-i]);
        }
    }

    return 0;
}