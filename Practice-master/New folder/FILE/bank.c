#include<stdio.h>
#include<string.h>
/*int deposit (char *acc_name[] ,int amount){
    char name[80];
    if(strcmp(gets(name),acc_name)==0){
        scanf
    }
}*/




int main(){
    FILE *fp;
    FILE *fp_out=fopen("out.txt","w");
    //fp_out=fopen("out.txt","w");
    char name[1000][80];
    int amount[1000];
    int i=0;
    fp=fopen("bank.txt","r");
    
    if(fp==NULL){
        printf("No such files!");
        return 0;
    }

    while(feof(fp)==0){
        
            fscanf(fp,"%s %d\n",name[i],&amount[i]);
            //printf("%s %d\n",name[i], amount[i]);
            fprintf(fp_out,"%s %d\n",name[i], amount[i]);
            i++;
    }

    



    fclose(fp);
    fclose(fp_out);
    
    return 0;
}