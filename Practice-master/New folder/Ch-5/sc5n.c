#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    int i , count=0;
    char ch, str[]="concatination", temp[]="-------------";
    printf("Let's start:\n");

    do
    {
        printf("%s\n",temp);
        printf("Enter your Guess:");
        ch=getche();
        printf("\n");

        for( i=0; i<strlen(str); i++)
        {
            if(ch==str[i]) temp[i]=ch;
        }
        count++;
    }
    while(strcmp(temp,str));

    printf("%s\n",temp);

    printf("You got the word in %d moves.\n",count);

    return 0;
}