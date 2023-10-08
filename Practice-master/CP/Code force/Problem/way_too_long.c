#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, l;
    scanf("%d",&n);
    char word[n][101];
    for ( i = 0; i < n; i++)
    {
        scanf("%s",word[i]);
    }

    for ( i = 0; i < n; i++)
    {
        l = strlen(word[i]);
        if( l > 10 && l<=100)
        {
            printf("%c%d%c",word[i][0],(l-2),word[i][l-1]);
            printf("\n");
        }
        else if( l > 100 )
        {
            printf("%c%d%c",word[i][0],98,word[i][99]);
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
