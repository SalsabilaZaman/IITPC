#include<stdio.h>
#include<string.h>
int main(){

    int data[10];

    for(int i=0; i<10; i++) scanf("%d",&data[i]);

    //data[0]+data[1]+... ...+data[9]=?

    for(int i=0; i<10; i++){
        //data[i]=data[i]+data[i+1];
        data[i+1]= data[i] + data[i+1];
    } 

    printf("%d", data[9]);

    /*int sum=0;
    for(int i=0; i < 10; i++) sum+=data[i];

    printf("%d",sum);*/
    
    

    return 0;
}