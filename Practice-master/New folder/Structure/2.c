#include<stdio.h>
#include<string.h>

struct student
{
    char name[50];
    int roll;
    double cgpa;
}s[2];



int main(){

    for(int i=0;i<2;i++){
    gets(s[i].name);
    scanf("%d", &s[i].roll);
    scanf("%lf",&s[i].cgpa);

    }
    for(int i=0;i<2;i++)
        printf("Name:%s\nRoll:%d\nCgpa:%.2lf\n",s[i].name, s[i].roll, s[i].cgpa);

    return 0;
}