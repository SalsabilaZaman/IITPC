#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{

    long int loc = atoi(argv[2]);
    FILE *fp;

    if(argc!=3){
        printf("Invalid input\n");
        return 0;
    }
    if((fp=fopen(argv[1],"r"))==NULL){
        printf("Cannot open file\n");
        return 0;
    }

    fseek(fp,loc-1,SEEK_SET);
    char x= getc(fp);

    if(x == EOF){
        printf("Seek error\n");
        return 0;
    }

    printf("Value at byte %ld is %c",loc, x);
    fclose(fp);

    return 0;
}