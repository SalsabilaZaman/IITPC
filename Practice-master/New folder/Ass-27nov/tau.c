#include<stdio.h>
#include<string.h>
int main ()
{
    int i; char j;
    char word[10]={'B','U','Z','Z'};
    char nxt[10];
    for(i=0; word[i]!='\0'; i++)
    {
        j = word[i];
        if(word[i]=='Z')
        {
            nxt[i]='A';
        }
        else 
        {
            nxt[i] = j+1;
        }
    }
    
    printf("%s",nxt);
    return 0;
}
