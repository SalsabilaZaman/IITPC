#include<stdio.h>
#include<string.h>

struct student
{
    char name[50];
    int roll;
    double cgpa;
}s;



int main(){

    gets(s.name);
    s.roll=40;
    s.cgpa=3.75;

    printf("Name:%s\nRoll:%d\nCgpa:%.2lf\n",s.name, s.roll, s.cgpa);

    return 0;
}