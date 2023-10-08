#include<stdio.h>
#include<string.h>

int main()
{
    char word[80], bigstr[1000]={""};

    printf("Enter the Strings : ");
    
    for(  ; strlen(bigstr)<=1000 ;  )
    {
        gets(word);
        if(!strcmp(word,"Quit")) break;
        strcat(bigstr,word);
        strcat(bigstr,"\n");
    }
    
    printf(bigstr);
 

    return 0;
}