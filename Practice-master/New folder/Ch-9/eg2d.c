#include<stdio.h>
#include<stdlib.h>

int main(int arg, char *argv[])
{
    FILE *fp;
    char ch;
    
    if(arg!=3)
    {
        printf("Usage : find <file name> <ch>\n");
        exit(1);
    }
    
    if((fp=fopen(argv[1],"r"))==NULL)
    {
        printf("Can't open file.\n");
            exit(1);
    }

    while ((ch = fgetc(fp))!=EOF)
    {
        if(ch==*argv[2])
        {
            printf("%c found",ch);
            break;
        }
    }
    fclose(fp);

    return 0;
}