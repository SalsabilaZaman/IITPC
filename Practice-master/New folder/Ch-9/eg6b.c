#include<stdio.h>

int main(int argC, char *argV[])
{
    long loc;
    char ch;
    FILE *fp1, *fp2;

    fp1= fopen(argV[1], "rb");
    fp2= fopen(argV[2], "wb");
    fseek(fp1, 0L, SEEK_END);
    loc= ftell(fp1);

    loc=loc-1;
    while(loc>=0L)
    {
        fseek(fp1, loc, SEEK_SET);
        ch= fgetc(fp1);
        fputc(ch, fp2);
        loc--;
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}
