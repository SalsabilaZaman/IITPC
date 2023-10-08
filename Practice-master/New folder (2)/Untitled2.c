#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//write a program to store the data of 3 students
struct student{
    char name[30];
    int roll;
    float cgpa;
};
int main(){

    struct student arr[3];
    int i=0;
    while(i<3){
        printf("Enter name%d-",i+1);
        gets(arr[i].name);
        printf("Enter roll%d-",i+1);
        scanf("%d",&arr[i].roll);
        printf("Enter Cgpa%d-",i+1);
        scanf("%f",&arr[i].cgpa);
        scanf("%c");
        i++;
    }

     i=0;
    while(i<3){
        printf("name of student %d- %s\n",i+1,arr[i].name);
        printf("Roll of student %d-%d\n",i+1,arr[i].roll);
        printf("Cgpa of student %d-%0.2f\n",i+1,arr[i].cgpa);
        i++;
    }

    

    return 0;
}