#include<stdio.h>
#include<string.h>

int main()
{
    char word[80]={""};

    printf("Enter the Strings : \n");
    
    while( strcmp(word,"Quit") && strcmp(word,"quit") )
    {
        gets(word);
        
    }
 
    return 0;
}