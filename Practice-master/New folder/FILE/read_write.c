#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp,*op;
    char string[100];
    fp=fopen("country.txt","r");
    op=fopen("newfile.txt","w");
    //fgets(string,100,fp);
    for(int i=0;feof(fp)==0; i++){
        fgets(string,i,fp);
        //printf("%s",string);
        fprintf(op,"%s",string);
    }
    fclose(fp);
    fclose(op);
    return 0;
}