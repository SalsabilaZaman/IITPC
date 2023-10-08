#include<stdio.h>
#include<stdlib.h>

int main(int argC, char *argV[])
{
    FILE *fp;
    unsigned long count=0;
    char ch;

    if(argC!=2)
    {
        printf("Not enough arguements\n");
        exit(1);
    }
    if((fp=fopen(argV[1], "r"))==NULL)
    {
        printf("Error reading file\n");
        exit(1);
    }
    while(!feof(fp))
    {
        ch=fgetc(fp);
        count++;
    }
    if(fclose(fp)==EOF)
    {
        printf("Error closing file\n");
        exit(1);
    }
    printf("Number of bytes is: %lu", count);
    return 0;
}
