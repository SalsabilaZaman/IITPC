#include<stdio.h>
#include<string.h>

int main()
{
    char inp1[80], inp2[80];
    int i;

    printf("Enter the First string : ");
    gets(inp1);
    printf("Enter the Second string : ");
    gets(inp2);

    printf("String-1 is %s which have %d characters.\n",inp1,strlen(inp1));
    printf("String-2 is %s which have %d characters.\n",inp2,strlen(inp2));
    
    i = strcmp(inp1,inp2);
    if(i==0) printf("Strings Matched.\n");
    else if(i>0) printf("String-1 is greater (succesor of) than String-2.\n");    // 1
    else printf("String-1 is less (preceding to) than String-2.\n");              //-1 

    if(strlen(inp1)+strlen(inp2)<80)
    {
        strcat(inp1,inp2);    //Makes a string adding 2 in 1..
        printf(inp1);
    }

    strcpy(inp1,inp2);      // copy inp2 to inp1..
    printf(inp1);

    return 0;
}