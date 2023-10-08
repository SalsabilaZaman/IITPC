#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    char fname[80];
    printf("Enter name of file to erase: ");
    gets(fname);
    printf("Are you sure? (y/n)");
    if(toupper(getchar())=='Y')
        if(remove(fname))
        printf("File not found");
    return 0;
}
