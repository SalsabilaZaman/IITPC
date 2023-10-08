#include<stdio.h>
#include<string.h>

int get_sum(int x, int y){
    int sum= x + y;

    return sum;
}

void say_hi(){
    printf("Hi\n");
}

int main(){
    printf("Main starts\n");

    say_hi();

    int result = get_sum(10,20);
    printf("My sum =%d", result);
    //printf("%d\n",get_sum(10, 20));
    
    return 0;
}