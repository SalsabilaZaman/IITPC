#include<stdio.h>
#include<string.h>

void print_msg(){
    printf("Hello!!I am from inside of a function");
}

int main(){
    printf("Print your message:\n");
    print_msg();
    return 0;
}