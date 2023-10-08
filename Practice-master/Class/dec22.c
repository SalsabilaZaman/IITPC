#include<stdio.h>
struct stu
{
    char name[50];
    int roll;
    double cgpa;
};


int main()
{
    int i;
    double d;
    struct stu s[2];
    
    scanf("%s",s[0].name);
    s[0].roll = 13;
    s[0].cgpa = 3.5;
    scanf("%s",s[1].name);
    s[1].roll = 17;
    s[1].cgpa = 3.8;

    for ( i = 0; i < 2; i++)
    {
        printf("%s\t%d\t%lf\n",s[i].name, s[i].roll, s[i].cgpa);
    }
    
    return 0;
}