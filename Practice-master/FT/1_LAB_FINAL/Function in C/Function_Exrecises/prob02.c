#include<stdio.h>
#include<string.h>
void even_Or_odd (int num){

    if(num % 2 == 0) printf("EVEN");
    else printf("ODD");

}


int main(){
    int number;
    printf("Enter a number:");
    scanf("%d", &number);

    //Check the number if it's odd or even
    even_Or_odd(number);

    return 0;
}