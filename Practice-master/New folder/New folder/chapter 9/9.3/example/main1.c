#include<stdio.h>
#include<stdlib.h>

int main(int argC, char *argV[])
{
    FILE *fp, *fp_out;
    char ch;

    if(argC!=3)
    {
        printf("Not enough arguements\n");
        exit(1);
    }

    if((fp=fopen(argV[1], "r"))==NULL)
    {
        printf("Error reading file\n");
        exit(1);
    }
    if((fp_out=fopen(argV[2], "w"))==NULL)
    {
        printf("Error writing file\n");
        exit(1);
    }
    while(!feof(fp))
    {
        ch=fgetc(fp);
        if(ferror(fp))
        {
            printf("Error reading source file\n");
            exit(1);
        }
        if(!ferror(fp))
            fputc(ch,fp);
        if(ferror(fp_out))
        {
            printf("error reading destination file\n");
            exit(1);
        }
    }
    if(fclose(fp)==EOF)
    {
        printf("error closing file\n");
        exit(1);
    }
    if(fclose(fp_out)==EOF)
    {
        printf("Error closing file\n");
        exit(1);
    }

    return 0;
}
