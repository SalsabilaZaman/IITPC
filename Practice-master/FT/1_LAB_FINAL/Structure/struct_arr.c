#include<stdio.h>
#include<string.h>
#define n 4

struct Student{
    char name[80];
    int roll;
    float cgpa;
} bsse14[n];

int main(){
    //int i;
    
    /*printf("User input to the structure:\n");
    for(i=0; i< n; i++){
        printf("student %d\n", i+1);
        gets(bsse14[i].name);
        scanf("%d%f", &bsse14[i].roll , &bsse14[i].cgpa);
        scanf("%c");
    }

    for(i=0; i< n; i++){
        printf("student %d\n", i+1);
        printf("Name:%s Roll:%d CGPA:%f\n",bsse14[i].name, bsse14[i].roll , bsse14[i].cgpa);
    }*/

    FILE *fp;
    fp= fopen("IIT.txt", "r");
    if(fp == NULL){
        printf("NO such files!");
    }

    int i, j;
    for(i=0; !(feof(fp)); i++){
        fscanf(fp, "%s %d %f\n",bsse14[i].name, &bsse14[i].roll, &bsse14[i].cgpa);
        printf("%s %d %f\n",bsse14[i].name,bsse14[i].roll, bsse14[i].cgpa);
    }
    j=i;
    
    fclose(fp);

    FILE *np;
    np= fopen("Result_sheet.txt", "w");

    for(i=0; i<j; i++){
        fprintf(fp, "%s %d %f\n",bsse14[i].name, bsse14[i].roll, bsse14[i].cgpa);
    }

    fclose(np);

    



    return 0;
}