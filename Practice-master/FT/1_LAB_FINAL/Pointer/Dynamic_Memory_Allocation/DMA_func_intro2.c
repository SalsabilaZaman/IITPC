#include<stdio.h>
#include<stdlib.h>

int main(){

    int *p1, *p2;
    p1 = (int *) malloc( 5* sizeof(int)); // p pointer points newly allocated memory //int* means int type ptr
    p2 = (int *) calloc( 5, sizeof(int)); // malloc and calloc returns a void type ptr. So there has to be a type cast.
    
    if(p1 == NULL || p2 == NULL) {
        printf("Memory not allocated\n");
    }else{ 
        printf("Memory allocation successful!\n");
        p1= realloc(p1, 50);  // p1 is the ptr  & 50 is the size
        printf("Memory reallocation successful.\n");        
    }
    return 0;
}