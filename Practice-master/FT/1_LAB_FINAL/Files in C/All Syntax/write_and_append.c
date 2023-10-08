#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp;

    fp= fopen("test_file.txt", "a+"); 
    //Unlike write mode, append mode doesn't destroy prev data, rather add data to the existing file

    int i;
    for(i = 65; i < 91; i++){
        fputc(i, fp); // i is the ASCII value of character
    }

    char arr[100] = "Hi, I am Tausif!";
    fputs(arr, fp);

    fprintf(fp ,"My ID is %d\n", 100);


    fclose(fp);

    return 0;
}