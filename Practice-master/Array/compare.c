#include<stdio.h>

int main()
{
    int i,j;
    char arr1[101];
    gets(arr1);

    char arr2[101];
    gets(arr2);

    i=0;

    while( (arr1[i]!='\0') && (arr2[i]!='\0') )
    {
        if( arr1[i]==arr2[i]-32 || arr1[i]==arr2[i]+32 || arr1[i]==arr2[i] )
        {
            i++;
            continue;
        } 
        // if( arr1[i]arr2[i] )
        // {
        //     printf("Not Matched.\n");
        //     return 0;
        // }
        if(arr1[i]!=arr2[i])
        {
            printf("Not Matched.\n");
            return 0;
        }
        i++;
    }

    printf("Matched...\n");

    return 0;
}
