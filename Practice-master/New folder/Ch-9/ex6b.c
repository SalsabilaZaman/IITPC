#include<stdio.h>
#include<stdlib.h>

int main(int argC, char *argV[])
{
    FILE *fp;
    char ch;
    int val;

    fp= fopen(argV[1], "rb");

    val= atoi(argV[2]);

    while(!feof(fp))
    {
        ch= fgetc(fp);
        if(ch==val)
            printf("Location of value is %ld\n", ftell(fp));
    }
    fclose(fp);
    return 0;
}
