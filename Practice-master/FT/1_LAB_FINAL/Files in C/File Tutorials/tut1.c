//Read all data from a File.
// Count the consonant, vowels and spaces.
#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp;
    fp= fopen("data.txt", "r");

    int c;
    int cCounter=0, vCounter=0, sCounter = 0;
    while(1){
        c = fgetc(fp);
        if(c == EOF) break;

        if(c == 32 || c == 10){
            sCounter++;
        }else if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            vCounter++;
        }else cCounter++;


        printf("%c", c);
    }

    printf("\nVowels:%d\tConsonants:%d\tSpace or new line character:%d\n",vCounter,cCounter,sCounter);

    fclose(fp);
    return 0;
}