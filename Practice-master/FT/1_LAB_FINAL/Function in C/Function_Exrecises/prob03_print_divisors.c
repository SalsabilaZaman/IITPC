#include<stdio.h>
#include<string.h>

void print_divisors (int x){
    /*if(x % 2 == 0){
        printf("2,");
    }

    if(x % 3 == 0){
        printf("3");
    }

    if(x % 4 == 0){
        printf("4");
    }

    if(x % 5 == 0){
        printf("5");
    }*/

    for(int i=1; i < x; i++){
        if(x % i == 0){
            printf("%d  ",i);
        }
    }
}  

int main(){
    int num;

    printf("Enter a number:");
    scanf("%d", &num);

    printf("Divisors of the number are:");
    print_divisors(num);

    return 0;
}