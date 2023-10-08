#include<stdio.h>
#include<string.h>
int main(){
    int num[7]={-99,45,100,37,89,-327,245};

    int max = num[0];
    int i;
    for(i=1; i<7; i++){
        if(num[i] > max) max = num[i]; 
    }

    //max = -99
    // 45 > -99 --->45
    // 45 > 100 --->100
    // 100> 37 ---->100
    // so on

    
    /*int max=0, i;

    for(i=0; i< 7 ;i++ ){
        if(num[i]> max) max= num[i]; 
    }*/  

    printf("Max value is:%d",max);

    return 0;
}