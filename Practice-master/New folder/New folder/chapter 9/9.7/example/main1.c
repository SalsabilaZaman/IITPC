#include<stdio.h>

int main()
{
    char fname[80];
    printf("Enter name of file to erase: ");
    gets(fname);
    printf("Are you sure?(y/n) ");
    if(toupper(getchar())=='Y')
        remove(fname);
    return 0;
}
