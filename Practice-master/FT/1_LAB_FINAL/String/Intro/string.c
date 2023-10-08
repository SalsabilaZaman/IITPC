/*
char letter;

scanf("%c", &name);

char name[]= {"Tausif"};

STRING IN MEMORY --> name ['T', 'a', 'u', 's', 'i', 'f', '\0']
printf("%s", name); OUTPUT ---> Tausif

char random[]= {'a', '1', '*'} 

STRING IN MEMORY --> random ['a', '1', '*', '\0']
printf("%s", random) OUTPUT ---> a1*

char string[50] ----> capacity of storing 49 characters plus null char

*/
#include<stdio.h>
#include<string.h>

int main(){
    char a[]={"Tausif"};

    printf("string\tsize\tlength\n");
    printf("%s\t%d\t%d\n", a, sizeof(a), strlen(a));

    int i=0;
    printf("\nIndex\tCharacter\n");
    while(1){
        printf("%d\t%c\n", i, a[i]);
        if(a[i] == '\0') break;
        i++;
    }

    return 0;
}

