#include<stdio.h>

int main(int argC, char *argV[])
{
    FILE *fp;
    char ch;
    long loc;

    fp= fopen(argV[1], "rb");
    fseek(fp, 0, SEEK_END);
    loc= ftell(fp);

    fseek(fp, 0, SEEK_SET);
    for(;loc>=0; loc=loc-2L)
    {
        ch= fgetc(fp);
        putchar(ch);
        fseek(fp, 1L, SEEK_CUR);
    }
    fclose(fp);

    return 0;
}
