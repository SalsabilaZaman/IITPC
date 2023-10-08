#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    int i, num;

    fp= fopen("rand", "wb");

    for(i=0; i<100; i++)
    {
        num=rand();
        fwrite(&num, sizeof num, 1, fp);
    }
    fclose(fp);
    return 0;
}
