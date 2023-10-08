#include<stdio.h>
#include<string.h>

int main(){

    char a[] = "Bangladesh";
    char b[] = "Dhaka";

    printf("Length of a:%d\nLength of b:%d\n", strlen(a), strlen(b));

    printf("Compare the two strings\n");
    int x= strcmp(a,b);

    if(x == 0) printf("Strings matched!\n");
    else printf("No Match Found!\n");

    printf("Concatenate the two\n");
    strcat(a,b);

    printf("a--> %s\nb--> %s\n", a, b);

    printf("Copy str b to str a\n");
    strcpy(a,b);

    printf("a--> %s\nb--> %s \n", a , b);



    return 0;
}