#include<stdio.h>
#include<string.h>

int main(){
    int a[3][3], i, j;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++ ){
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++ ){
            sum+= a[i][j];
        }
    }
    float avg= sum/9;
    //printf("\nsum is: %d", sum);
    printf("avg is: %f", avg);
    
    
    return 0;
}