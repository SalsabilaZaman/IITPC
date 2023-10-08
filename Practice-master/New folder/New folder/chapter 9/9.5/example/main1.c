#include<stdio.h>
#include<stdlib.h>

double d[10]={12.3,12.4,6.4,3.56,24.6,4.6,5.7,9.9,8.9,6.7};

int main()
{
    int i;
    FILE *fp;

    fp=fopen("file1.txt", "wb");

    for(i=0; i<10; i++)
    {
        fwrite(&d[i], sizeof(double), 1,fp);
    }
    fclose(fp);

    fp= fopen("file1.txt", "rb");

    for(i=0; i<10; i++)
    d[i]=-1.0;

    for(i=0; i<10; i++)
    {
        fread(&d[i], sizeof(double), 1,fp);
    }
    fclose(fp);

    for(i=0; i<10; i++)
    {
        printf("%f", d[i]);
    }
    return 0;
}