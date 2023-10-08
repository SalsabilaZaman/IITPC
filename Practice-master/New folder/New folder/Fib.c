#include<stdio.h>
#include<string.h>
int fibonacci(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    else 
    for(int i=0; i<=n ; i++ ){
        printf("%d",fibonacci(n-1) + fibonacci(n-2));
    }
    
    return fibonacci(n-1)+ fibonacci(n-2);
 }

int main(){
    
    int num,fib;
    printf("Enter a positive number:\n");
    scanf("%d",&num);
    fib=fibonacci(num);
    printf("%d\n",fib);


    return 0;
}