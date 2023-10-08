#include<stdio.h>
#include<string.h>

int main(){
    int a[5];
    int s_odd=0, s_even=0;


    int i;
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }

    printf("Values in array:");
    for(i=0; i<5; i++){
        printf("%d ", a[i]);
        if(a[i] % 2 == 0) s_even+=a[i];
        else s_odd+=a[i];
    }
    

    /*for(i=0; i<5; i++){
        
        if(a[i] % 2 == 0) s_even+=a[i];

        else s_odd+=a[i];
    }*/

    printf("\nSum of odd values:%d\n", s_odd);
    printf("Sum of even values:%d\n", s_even);
    
    return 0;
}