#include<stdio.h>
#include<ctype.h>

int main(int argC, char *argV[])
{
    FILE *fp1, *fp2;
    char ch;

    fp1= fopen(argV[1], "r");
    fp2= fopen(argV[2], "w");
    while(!feof(fp1))
    {
        ch=fgetc(fp1);
        if(!feof(fp1))
            fputc(toupper(ch), fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
