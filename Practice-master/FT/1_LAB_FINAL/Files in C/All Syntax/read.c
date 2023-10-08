#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp;
    fp= fopen("test_file.txt", "r");

    int c;
    c = fgetc(fp);
    printf("The character is:%c\n", c);

    char buff[100];
    fscanf(fp ,"%s", buff); // while there is no space/new line char, fscanf reads 
    printf("Buffer contains:%s\n", buff);

    fgets(buff, sizeof(buff), fp);
    printf("Now the buffer contains:%s\n", buff);

    fclose(fp);
    return 0;
}