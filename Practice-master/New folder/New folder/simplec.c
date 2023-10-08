#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argC, char *argV[]){

    if(argC != 3){
        printf("Usage: <source_file> <destination_file>\n");
        exit(1);
    }


    FILE *fp;
    char str[1000];

    //fp = fopen("argV[1]", "r");

    if((fp = fopen(argV[1],"r")) == NULL ){
        printf("No such files!\n");
        exit(1);
    }

    for(int i = 0; !feof(fp); i++){
        fgets(str, 1000, fp);
    }

    fclose(fp);

    fp = fopen(argV[2],"w");

    int i = 0;
    while(!feof(fp)){
        fputs(str,fp);
    }

    fclose(fp);

    return 0;
}