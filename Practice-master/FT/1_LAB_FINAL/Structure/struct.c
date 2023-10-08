#include<stdio.h>
#include<string.h>

struct student
{
    char name[80];
    int roll;
    float cgpa;
};


int main(){

    struct student IIT;
    
    gets(IIT.name);
    scanf("%d%f", &IIT.roll , &IIT.cgpa);
    printf("Name:%s  Roll:%d  CGPA:%f",IIT.name, IIT.roll, IIT.cgpa);

    

    return 0;
}