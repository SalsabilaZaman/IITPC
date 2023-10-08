#include<stdio.h>
#include<string.h>

int main()
{
    char arr[51];
    int a, i, j, k, l, n;
    scanf("%d",&a);
    while (a--)
    {
        i=0;
        j=0;
        k=0;
        scanf("%d",&n);
        scanf("%s",arr);
                
        while (arr[k]!='\0')
        {
            if(arr[k]=='R')i++;
            else if(arr[k]=='L')i--;
            else if(arr[k]=='U')j++;
            else if(arr[k]=='D')j--;
            if(  i==1 && j==1 )
            {
                printf("YES\n");
                break;
            }
            k++;
        }
        if(k==n) printf("NO\n");
        
    }
    
    return 0;
}