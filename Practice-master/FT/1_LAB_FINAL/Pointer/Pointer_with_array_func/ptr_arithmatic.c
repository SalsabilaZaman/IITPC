#include<stdio.h>
#include<string.h>

int main(){
    int num[2][5] ={
        {1,2,3,4,5},
        {23,25,26,98,75}
    };

    int *p = &num[0][0];

    //int sum = *p + *(p+ 7); // FOR ACCESSING 8TH ELEMENT (*p+7)

    //printf("Sum: %d ", sum);
    int sum=0;
    for(int i = 0; i<2*5; i++){
        sum+= *(p+i);
    }

    printf("Sum is:%d", sum);
    
    return 0;
}