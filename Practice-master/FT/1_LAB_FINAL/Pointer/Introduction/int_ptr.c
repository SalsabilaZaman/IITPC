#include<stdio.h>
#include<string.h>

int main(){
    int x=10;
    int *ptr;
    ptr=&x;

    printf("Value:%d\nAddress:%p\n",x, &x);
    printf("%p", ptr);


    return 0;
}