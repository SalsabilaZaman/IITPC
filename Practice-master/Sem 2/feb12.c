#include<stdio.h>
#include<string.h>

struct bsse14
{
    char name[50];
    float cgpa;              
    struct bsse14 *p;
} std[5], temp, *t;

int main()
{
    int i, j;

    for( i=0; i<5; i++)
    {
        scanf("%s %f",&std[i].name,&std[i].cgpa);
    } 
    printf("\n");

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5 ; j++)
        {
            if(std[j].cgpa < std[j+1].cgpa)
            {
                temp.cgpa = std[j].cgpa;
                std[j].cgpa = std[j+1].cgpa;
                std[j+1].cgpa = temp.cgpa;

                strcpy(temp.name,std[j].name);
                strcpy(std[j].name,std[j+1].name);
                strcpy(std[j+1].name,temp.name);

                std[j].p = &std[j+1];
                
            }
        }
    }
    std[j-1].p = NULL;

    t = &std[0];
    while(t!=NULL)
    {
        printf("%s\n",t->name);
        t = t->p;
    }

    return 0;
}
