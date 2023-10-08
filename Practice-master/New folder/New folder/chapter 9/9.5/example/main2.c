#include<stdio.h>

double d[10]={2.3,3.4,4.3,5.4,6.7,12.5,56.4,12.7,34.7,34.2};
int main()
{
    int i;
    FILE *fp;

    fp= fopen("file2.txt", "wb");

    fwrite(d, sizeof(d), 1, fp);
    fclose(fp);

    for(i=0; i<10; i++)
        d[i]=-1.0;

    fp= fopen("file2.txt", "rb");

    fread(d, sizeof(d), 1, fp);

    for(i=0; i<10; i++)
        printf("%.2f ", d[i]);
    fclose(fp);
    return 0;
}
