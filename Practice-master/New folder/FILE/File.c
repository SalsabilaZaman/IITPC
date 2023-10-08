/*FILE --->Stores input

*/

#include<stdio.h>
#include<string.h>
int main(){
    
    char str1[80],str2[80];
    int i,j;
    FILE *fp;
    fp= fopen("input.txt", "r");
    //fp= fopen("input2.txt", "r");
    fscanf(fp,"%s %d %s %d",str1, &i, str2, &j);
    printf("%s %d\n%s %d\n",str1,i, str2,j);

    if(fp == NULL){
        printf("No such files!\n");
        return 0;
    }

    fclose(fp);


    return 0;
}