#include<stdio.h>
#include<string.h>
#include<time.h>

struct bsse14
{
    char name[50];
    float cgpa;              
    struct bsse14 *p;
} std[5], temp, *t;

int main()
{
    clock_t s_time=clock(), e_time, t_time;
    int i, j, arr[5];
    printf("Start time - %ld\n",s_time);

    for( i=0; i<5; i++)
    {
        scanf("%s %f",&std[i].name,&std[i].cgpa);
        arr[i] = i ;
    } 
    printf("\n");

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5 ; j++)
        {
            if(std[arr[j]].cgpa < std[arr[j+1]].cgpa)
            {
                // temp.cgpa = std[j].cgpa;
                // std[j].cgpa = std[j+1].cgpa;
                // std[j+1].cgpa = temp.cgpa;

                // strcpy(temp.name,std[j].name);
                // strcpy(std[j].name,std[j+1].name);
                // strcpy(std[j+1].name,temp.name);

                arr[j] = arr[j+1] ;

                std[j].p = &std[j+1];
                
            }
        }
    }
    std[j-1].p = NULL;

    //t = &std[0];
    j=0;
    while(j<5)
    {
        printf("%s\n",std[arr[j]].name);
        //t = t->p;
        j++;
    }

    e_time = clock();
    t_time = (e_time - s_time)/ CLOCKS_PER_SEC;
    printf("End time - %ld\n",e_time);
    printf("Execution time - %ld\n",t_time);

    return 0;
}
