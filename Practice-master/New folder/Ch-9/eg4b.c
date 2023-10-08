#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char str[80];
    int d;
    double ld;

    if(argc!=2)
    {
        printf("Specify file name .\n");
        exit(1);
    }

    if((fp=fopen(argv[1],"w"))==NULL)
    {
        printf("Can't open file.\n");
        exit(1);
    }

    fprintf(fp,"%f %d %s",123.234, 1533, "Hello");
    fclose(fp);

    if((fp=fopen(argv[1],"r"))==NULL)
    {
        printf("Can't open file.\n");
        exit(1);
    }

    fscanf(fp,"%lf %d %s",&ld,&d,str);
    printf("%lf %d %s",ld,d,str);

    fclose(fp);
    
    return 0;
}