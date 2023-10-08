#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argC, char *argV[])
{
    FILE *fp, *fp_out;
    char ch,flag;

    if(argC<3)
    {
        printf("Not enough arguements\n");
        exit(1);
    }
    if((fp=fopen("file.txt", "r"))==NULL)
    {
        printf("Error reading file\n");
        exit(1);
    }

    if((fp_out=fopen("file2.txt", "w"))==NULL)
    {
        printf("Error reading file\n");
        exit(1);
    }

    if(argC==4 && !strcmp(argV[3], "watch"))
    flag=1;
    else
    flag=0;

    while(!feof(fp))
    {
        fscanf(fp, "%c", &ch);
        fprintf(fp_out, "%c", ch);
        if(flag)
        printf("%c", ch);
    }

    fclose(fp);
    fclose(fp_out);

    return 0;
}
