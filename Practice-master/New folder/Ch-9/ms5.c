#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    int i, num;

    fp= fopen("rand", "rb");

    for(i=0; i<100; i++)
    {
        fread(&num, sizeof num, 1, fp);
        printf("%d", num);
    }
    fclose(fp);
    return 0;
}
