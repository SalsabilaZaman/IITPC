#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    
    printf("Enter your string:");
    gets(str);

    int i=0;

    /*while(1){
        i++;
        if(str[i] == '\0'){
            break;
        }
    }*/

    while(str[i] != '\0'){
        i++;
    }

    

    printf("Length of the string is:%d", i);


    return 0;
}