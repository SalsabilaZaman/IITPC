#include<stdio.h>
#include<stdlib.h>

int main(){

    int *p;
    //p= (int *)malloc( 5* sizeof(int)); // p pointer points newly allocated memory //int* means int type ptr
    p = (int*) calloc(5, sizeof(int)); // malloc and calloc returns a void type ptr. So there has to be a type cast.
    
    if(p == NULL) {
        printf("Memory not allocated\n");
    }else{ 
        printf("Memory allocation successful!\n");
        //do your work
        free(p);
        printf("Memory freed successfully!\n");
    }
    return 0;
}