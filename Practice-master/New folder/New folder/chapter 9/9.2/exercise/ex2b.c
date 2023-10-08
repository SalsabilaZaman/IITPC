#include<stdio.h>

void main(int argC, char *argV[])
{
    char ch;
    FILE *fp;

    if(argC!=2)
    {
        printf("File name not specified.\n");
        exit(1);
    }

    if((fp=fopen(argV[1], "r"))==NULL)
    {
        printf("Error reading file.\n");
        exit(1);
    }
    while(ch=fgetc(*argV[1])!=EOF)
        putchar(ch);
    fclose(argV[1]);

}
