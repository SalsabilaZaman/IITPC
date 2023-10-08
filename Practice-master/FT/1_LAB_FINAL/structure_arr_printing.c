#include<stdio.h>
#include<string.h>

struct x
{
    char name[60];
    int roll;
};


int main(){

    struct x arr[2];

    int i;
    for(i=0; i<2 ;i++){
        gets(arr[i].name);
        scanf("%d", &arr[i].roll);
        scanf("%c");
    }

    //a[0].name= "farhan";


    for(i=0; i<2; i++){
        printf(arr[i].name);
        printf("\n%d\n", arr[i].roll);
    }
    

    return 0;
}