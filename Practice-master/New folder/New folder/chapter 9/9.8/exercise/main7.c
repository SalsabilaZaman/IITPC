#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argC, char *argV[])
{
    FILE *fp1, *fp2;
    char ch;
    int tab, count;

    if(argC!=3)
    {
        printf("Not enough arguements\n");
        exit(1);
    }
    fp1= fopen(argV[1], "r");
    fp2= fopen(argV[2], "w");

    count=0;
    while(!feof(fp1))
    {
        ch= fgetc(fp1);
        if(ch=='\t')
        {
            for(tab=count; tab<8; tab++)
                fputc(' ', fp2);
            count=0;
        }

    else{
        if(!feof(fp1))
            fputc(ch, fp2);
        count++;
        if(count==8 || count=='\n')
            count=0;
    }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
