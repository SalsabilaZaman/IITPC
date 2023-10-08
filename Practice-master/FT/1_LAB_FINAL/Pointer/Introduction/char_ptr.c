#include<stdio.h>
#include<string.h>

int main(){
    char ch = 'a', *ch_ptr;
    ch_ptr = &ch;
    double num= 3.70, *num_p;
    num_p= &num;

    printf("%c %c %lf", ch, *ch_ptr, *num_p);


    return 0;
}