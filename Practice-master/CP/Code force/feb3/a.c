#include<stdio.h>

int main()
{
    char arr, t;
    int a;
    scanf("%d",&a);
    scanf("%c",&t);
    if(a<27)
    while (a--)
    {
        scanf("%c",&arr);
        scanf("%c",&t);
        if( arr=='c' || arr=='o' || arr=='d' || arr=='e' || arr=='f' || arr=='r' || arr=='e' || arr=='s' )
        {
            printf("YES\n");
        }
        else printf("NO\n");
    }
    
    return 0;
}