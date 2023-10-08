#include<stdio.h>
#include<string.h>

int main(){
    int a[5] = {1,2,3,4,5}, i, sum=0;

    printf("Address of starting block:%u\n", a);
    printf("Index\tAddress\n");
    for(i=0; i<5; i++){
        printf("%d\t%u\n",i, &a[i]);
    } 

    printf("Print the Array using pointer\n");
    
    for(i=0; i<5; i++){
        printf("%d ",*(a + i));
    } 
    
    printf("\nSum of all elements in the array using pointer\n");
    
    for(i=0; i<5; i++){

        sum+= *(a + i);        
    } 

    printf("The sum is:%d ", sum);
    return 0;
}