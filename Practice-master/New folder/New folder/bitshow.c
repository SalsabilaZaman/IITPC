#include<stdio.h>

struct ch{
    int a:1;
    int b:1;
    int c:1;
    int d:1;
    int e:1;
    int f:1;
    int g:1;
    int h:1;
};

union bin{
    char ch;
    struct ch i;
};

int main(){
    union bin j;
    printf("Enter a character: ");
    scanf("%c",&j.ch);
    if(j.i.h){
        printf("1");
    }
    else{
        printf("0");
    }
    if(j.i.g){
        printf("1");
    } 
    else{
        printf("0");
    }
    if(j.i.f){
        printf("1");
    }
    else{
        printf("0");
    }
    if(j.i.e){
        printf("1");
    }
    else{
        printf("0");
    }
    if(j.i.d){
        printf("1");
    }
    else{
        printf("0");
    }
    if(j.i.c){
        printf("1");
    }
    else{
        printf("0");
    }
    if(j.i.b){
        printf("1");
    }
    else{
        printf("0");
    }
    if(j.i.a){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}