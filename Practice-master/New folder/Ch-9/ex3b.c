#include<stdio.h>
#include<stdlib.h>

int main(int argC, char *argV[])
{
    FILE *fp1, *fp2, *fp_temp;
    char ch1,ch2,temp;

    if(argC!=4)
    {
        printf("Not enough arguements\n");
        exit(1);
    }
    if((fp1=fopen(argV[1], "r"))==NULL)
    {
        printf("Error reading file\n");
        exit(1);
    }
    if((fp_temp=fopen(argV[3], "w"))==NULL)
    {
        printf("Error reading file\n");
        exit(1);
    }
    while(!feof(fp1))
    {
        ch1=fgetc(fp1);
        fputc(ch1, fp_temp);
    }
    fclose(fp_temp);
    fclose(fp1);
    fp1=fopen(argV[1], "w");
    fp2=fopen(argV[2], "r");

    while(!feof(fp2))
    {
        ch2=fgetc(fp2);
        fputc(ch2, fp1);
    }
    fclose(fp1);
    fclose(fp2);

    fp_temp=fopen(argV[3], "r");
    fp2= fopen(argV[2], "w");

    while(!feof(fp_temp))
    {
        ch1=fgetc(fp_temp);
        fputc(ch1, fp2);
    }
    fclose(fp_temp);
    fclose(fp2);

    return 0;
}
