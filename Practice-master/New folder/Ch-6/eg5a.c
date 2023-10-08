#include<stdio.h>
#include<string.h>

char *p[][2]= 
{
    "Red Delicious","Red",
    "Golden Delicious","Yellow",
    "Winesap","Red",
    "Gala","Reddish Orange",
    "Lodi","Green",
    "Musta","Yellow",
    "Cortland","Red",
    "Jonathan","Red",
    "",""
};

int main()
{
    char apple[80];
    int i;
    
    printf("Enter name of the apple : ");
    gets(apple);

    for ( i = 0; *p[i][0]; i++)
    {
        if(!strcmp(apple,p[i][0]))
        {
            printf("%s is %s\n",apple,p[i][1]);
        }
    }

    return 0;
} 