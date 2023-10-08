#include<stdio.h>
#include<string.h>

int main(){
    int num[5]={1,50,39,78,20}, *p[5], i, j, max;

    for(i=0; i<5; i++){
        p[i] = &num[i];
    }

    for(i=0; i<5; i++){
        for(j=i+1; j<5;j++){
            if(*p[i]> *p[j]){
                max = *p[i];
            }
        }
    }

    printf("Maximum value in the array:%d", max);


    return 0;
}