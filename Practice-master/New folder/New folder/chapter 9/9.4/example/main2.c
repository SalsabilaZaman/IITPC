#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argC, char*argV[])
{
    FILE *fp;
    double ld;
    int d;
    char str[80];

    if(argC!=2)
    {
        printf("Not enough arguements\n");
        exit(1);
    }

    if((fp=fopen(argV[1], "w"))==NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    fprintf(fp, "%f %d %s", 12345.342, 1908, "hello");
    fclose(fp);

    fp=fopen(argV[1], "r");
    fscanf(fp, "%lf %d %s", &ld, &d, str);
    printf("%f %d %s", ld,d,str);
    fclose(fp);

    return 0;
}
