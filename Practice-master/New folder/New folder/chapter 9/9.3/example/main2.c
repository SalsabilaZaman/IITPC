#include<stdio.h>
#include<stdlib.h>

int main(int argC, char *argV[])
{
    FILE *fp1, *fp2;
    char ch1,ch2;
    unsigned long l;
    int same;

    if(argC!=3)
    {
        printf("Not enough arguements\n");
        exit(1);
    }
    if((fp1=fopen(argV[1], "r"))==NULL)
    {
        printf("Error reading file\n");
        exit(1);
    }
    if((fp2=fopen(argV[2], "r"))==NULL)
    {
        printf("Error reading file\n");
        exit(1);
    }
    l=0;
    same=1;
    while(!feof(fp1))
    {
        ch1=fgetc(fp1);
        if(ferror(fp1))
        {
            printf("Error reading source\n");
            exit(1);
        }
        ch2=fgetc(fp2);
        if(ferror(fp2))
        {
            printf("Error reading source\n");
            exit(1);
        }
        if(ch1!=ch2)
        {
            printf("File differs at byte %lu", l);
            same=0;
            break;
        }
        l++;
    }
    if(same)
    {
        printf("Files are same\n");
    }
    if(fclose(fp1)==EOF)
    {
        printf("Error closing file\n");
        exit(1);
    }
    if(fclose(fp2)==EOF)
    {
        printf("Error closing file\n");
        exit(1);
    }
    return 0;
}
