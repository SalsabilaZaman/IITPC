#include<stdio.h>
#include<string.h>

int main(){
    float A[5], B[5], AB[5];
    int i;

    printf("Enter values of the array A:\n");
    for(i=0; i<5; i++){
        scanf("%f", &A[i]);
    }


    printf("Enter values of the array B:\n");
    for(i=0; i<5; i++){
        scanf("%f", &B[i]);
    }

    for(i=0; i<5; i++){
        AB[i]= A[i] + B[i];
    }

    for(i=0; i<5; i++) printf("%f ", AB[i]);

    return 0;
}