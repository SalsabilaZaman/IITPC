#include<stdio.h>
#include<string.h>
int main(){

    float a[5];

    int i;

    for(i=0; i<5; i++) scanf("%f", &a[i]);

    for(i=0; i<5; i+=1) printf("%f  ", a[i]);

    return 0;
}