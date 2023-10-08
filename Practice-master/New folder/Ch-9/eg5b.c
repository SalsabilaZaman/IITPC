#include<stdio.h>
#include<stdlib.h>

double d[10]={10.23,19.87,1002.34,12.9,0.897,11.45,75.34,0.5,1.01,875.875};

int main(int argc, char *argv[])
{
    FILE *fp;
    int i;

    if((fp=fopen("myfile.txt","wb"))==NULL)
    {
        printf("Can't open file.\n");
        exit(1);
    }

    if(fwrite(&d[i],sizeof(double),1,fp)!=1)
    {
        printf("Write error.\n");
        exit(1);
    }
    fclose(fp);

    if((fp=fopen("myfile.txt","rb"))==NULL)
    {
        printf("Can't open file.\n");
        exit(1);
    }

    for(i=0; i<10; i++)
    {
        d[i]=-1.0;
    }

    if(fread(&d[i],sizeof(double),1,fp)!=1)
    {
        printf("Read error.\n");
        exit(1);
    }
    fclose(fp);

    for(i=0; i<10; i++)
    printf("%f ",d[i]);
    
    return 0;
}