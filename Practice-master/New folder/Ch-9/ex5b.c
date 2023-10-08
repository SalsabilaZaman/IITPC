#include<stdio.h>

int main()
{
    double num;
    int i;
    FILE *fp1, *fp2;

    fp1= fopen("VALUES.txt", "rb");
    fp2= fopen("Count.txt", "rb");

    fread(&num, sizeof num, 1, fp1);

    for(;i>0; i--)
    {
        fread(&i, sizeof i, 1, fp2);
        printf("%lf\n", num);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
