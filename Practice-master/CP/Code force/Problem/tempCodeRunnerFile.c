#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, l;
    scanf("%d",&n);
    scanf("%c");
    char word[n][100];
    for ( i = 0; i < n; i++)
    {
        gets(word[i]);
    }
    for ( i = 0; i < n; i++)
    {
        l = strlen(word[i]);
        if( l > 10 )
        {
            printf("%c%d%c",word[i][0],(l-2),word[i][l-1]);
            printf("\n");
        }
        else 
        {
            printf(word[i]);
            printf("\n");
        }
    }
    return 0;
}