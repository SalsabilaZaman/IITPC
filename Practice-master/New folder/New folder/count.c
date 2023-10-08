#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
    int charl=0,word=1,i=0;
    char str[100];
    strcpy(str,argv[1]);
    while(str[i]){
        charl++;
        if(str[i]==' '){
            word++;
        }
        i++;
    }
    printf("character = %d , words = %d",charl,word);
    return 0;
}