#include<stdio.h>
#include<string.h>

float add(float x, float y){
    return x + y;
}

float subtract(float x, float y){
    return x - y;
}

float multiply(float x, float y){
    return x * y;
}   

float divide(float x, float y){
    if(y!=0) return x / y;
    else printf("MATH ERROR!"); 
}

int main(){
    float num1,num2;
    char option;
    
    printf("Enter your choice (a/b/c/d):");
    option = getchar();

    printf("Enter two numbers:\n");
    scanf("%f%f", &num1, &num2);

    if(option == 'a') printf("Sum = %f", add(num1,num2));
    
    else if(option == 'b') printf("Difference = %f", subtract(num1,num2));
    
    else if(option == 'c') printf("Product = %f", multiply(num1,num2));
    
    else if(option == 'd'){ 
        float result = divide(num1, num2);
        if (num2 != 0) ("Quotient = %f", result);

    }
    
    return 0;
}