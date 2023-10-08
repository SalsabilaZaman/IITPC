#include<stdio.h>
#include<stdlib.h>

void main()
{
    char str[]="This is a file system test.\n",*p,ch;
    FILE *fp;

    if((fp=fopen("file2.txt", "w"))==NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    p=str;
    while(*p)
    {
        if((fputc(*p++, fp))==EOF)
        {
            printf("Error writing file.\n");
            exit(1);
        }
    }
    fclose(fp);

    if((fp=fopen("file2.txt", "r"))==NULL)
    {
        printf("Error finding file.\n");
        exit(1);
    }
    while((ch=fgetc(fp))!=EOF)
        putchar(ch);

    fclose(fp);
}
