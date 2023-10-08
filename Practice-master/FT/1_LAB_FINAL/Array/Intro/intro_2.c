#include<stdio.h>
#include<string.h>
int main(){

    int a[5] = {16, 15, 65, 98, 78};

    /*printf("value of index 0 is:%d\n", a[0]);
    printf("value of index 4 is:%d\n", a[4]);*/

    for(int i=0; i<5; i++){
        printf("%3d", a[i]);
    }

    return 0;
}