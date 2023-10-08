#include<stdio.h>
#include<string.h>
int main(){
    char name[10][100];
    int age[10],i,n=0,k;
    FILE *fp;
    fp=fopen("input.txt","r");
    i=0;
    while(!feof(fp)){
        fscanf(fp,"%s",&name[i]);
        fscanf(fp,"%d\n",&age[i]);
        i++;
        n++;
    }
    k=i;
    fclose(fp);
    fp=fopen("x.txt","w");
    i=0;
    while(i<k){
        if(i==3){
            i++;
            continue;
        }
        else{
            fprintf(fp,"%s ",name[i]);
            fprintf(fp,"%d\n",age[i]);
        }
        i++;
    }
    fclose(fp);
    return 0;
}
