#include<stdio.h>
#include<string.h>

//CALL BY REFERENCE
void swap (int *n1, int *n2){
    int jar;
    jar = *(n1);
    *(n1) = *(n2);
    *(n2) = jar;
}

int main(){

    int num1=5, num2=10;
    printf("num1 - %d num2 - %d\n", num1, num2);
    
    swap(&num1, &num2);
    printf("num1 - %d num2 - %d\n", num1, num2);

    return 0;
}