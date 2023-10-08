#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argC, char *argV[])
{
    FILE *fp;
    char str[80];

    if(argC!=2)
    {
        printf("Not enough arguements\n");
        exit(1);
    }
    if((fp=fopen(argV[1], "w"))==NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    printf("Enter blank line to stop: ");
    do{
        printf(": ");
        gets(str);
        strcat(str, "\n");
        if(*str!='\n')
            fputs(str, fp);
    }while(*str!='\n');
    fclose(fp);
    fp=fopen(argV[1], "r");
    do{
        fgets(str, 79,fp);
        if(!feof(fp))
            printf(str);
    }while(!feof(fp));
    fclose(fp);

    return 0;
}
