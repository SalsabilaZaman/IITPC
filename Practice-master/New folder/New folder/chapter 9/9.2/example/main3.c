#include<stdio.h>

void main(int argC, char *argV[])
{
    char ch;
    FILE *fp;

    if(argC!=3)
    {
        printf("Usage: find <file name> <ch>\n");
        exit(1);
    }
    if((fp=fopen(argv[1],"r"))==NULL)
    {
        printf("Error reading file\n");
        exit(1);
    }

    while(ch=fgetc(fp)!=EOF)
    {
        if(ch==*argV[2])
        {
            printf("Character found\n");
            break;
        }
    }
    fclose(fp);
