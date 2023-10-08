#include<stdio.h>
double d[]= {2.3,4.5,3.5,6.4,8.8,7.5,9.5,23.5,56.2,67.3};

int main()
{
    long loc;
    double value;
    FILE *fp;

    fp= fopen("file4.txt", "wb");
    fwrite(d, sizeof d, 1, fp);
    fclose(fp);

    fp=fopen("file4.txt", "rb");

    printf("Which element: ");
    scanf("%ld", &loc);
    fseek(fp, loc*sizeof(double), SEEK_SET);
    fread(&value, sizeof(double), 1, fp);
    printf("Element %ld is %.2f", loc, value);
    fclose(fp);
    return 0;
}
