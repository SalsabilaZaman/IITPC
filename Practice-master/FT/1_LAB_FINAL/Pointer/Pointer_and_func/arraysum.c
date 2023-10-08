#include<stdio.h>
#include<string.h>

int Sum(int *a, int size){
    int i, sum = 0;

    for(i=0; i<size; i++){
        sum+= *(a+i);
    }

    return sum;
}

int main(){
    int arr[3]={4,5,10};
    printf("sum is: %d", Sum(&arr[0], 3));
    
    return 0;
}