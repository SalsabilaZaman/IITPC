#include<stdio.h>
#include<stdlib.h>

int main(int argC, char *argV[])
{
    FILE *fp;
    if(argC!=2)
    {
        printf("not enough arguements\n");
        exit(1);
    }
    fp= fopen(argV[1], "r");
    while(!feof(fp))
    {
        putchar(getc(fp));
    }
    rewind(fp);
     while(!feof(fp))
    {
        putchar(getc(fp));
    }
    fclose(fp);

    return 0;
}