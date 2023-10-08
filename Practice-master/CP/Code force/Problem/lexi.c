#include<stdio.h>
#include<string.h>

int main ()
{
    char ar1[101],ar2[101];
    int i=0;
    scanf("%s %s", ar1, ar2);
    strupr(ar1);
    strupr(ar2);
    
    while ( ar1[i] || ar2[i] )
    {
        if ( ar1[i]==ar2[i] )
        {
            i++;
        }
        else if( ar1[i] > ar2[i] ) 
        {
            printf("1");
            break;
        }
        else 
        {
            printf("-1");
            break;
        }
    }
    if (ar1[i]=='\0' && ar2[i]=='\0')
    {
        printf("0");
    }
    
    return 0;
}