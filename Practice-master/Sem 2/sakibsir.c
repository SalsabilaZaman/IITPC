#include<stdio.h>
#include<string.h>

struct bsse14
{
    char name[50];
    int roll;
    float cgpa;
    struct bsse14 *p;
} std[52], temp;

int main()
{
    int i, j, end;
    struct bsse14 *p;

    FILE *fp;
    fp = fopen("ss.txt","r");
    for( i=0; feof(fp)==0; i++)
    {
        fscanf(fp,"%s %d %f",std[i].name,&std[i].roll,&std[i].cgpa);
    }
    end = i;

    fclose(fp);

    for( i=0; i<10; i++)
    {
        printf("%s\t",std[i].name);
        printf("%d\t",std[i].roll);
        printf("%f\t",std[i].cgpa);
        std[i].p = NULL;
        printf("%p\n",std[i].p);
    }
    //std[i].p=NULL;
    printf("\n");


    for ( i = 0; i < end; i++)
    {
        for ( j = 0; j < end ; j++)
        {
            if(std[j].cgpa < std[j+1].cgpa)
            {
                temp.cgpa = std[j].cgpa;
                std[j].cgpa = std[j+1].cgpa;
                std[j+1].cgpa = temp.cgpa;

                temp.roll = std[j].roll;
                std[j].roll = std[j+1].roll;
                std[j+1].roll = temp.roll;

                strcpy(temp.name,std[j].name);
                strcpy(std[j].name,std[j+1].name);
                strcpy(std[j+1].name,temp.name);

                std[j].p = &std[j+1];
                //temp.p = std[j].p;
                //std[j+1].p = temp.p;

            }
        }
    }

    for( i=0; i<10; i++)
    {
        printf("%s\t",std[i].name);
        printf("%d\t",std[i].roll);
        printf("%f\t",std[i].cgpa);
        printf("%p\n",std[i].p);
    }


    FILE *fpn = fopen("ss_n.txt","w");

    for(i=0; i<10; i++)
    {
            fprintf(fp,"%s\t",std[i].name);
            fprintf(fp,"%d\t",std[i].roll);
            fprintf(fp,"%f\t",std[i].cgpa);
            fprintf(fp,"%p\n",std[i].p);
    }
        fclose(fpn);

    return 0;
}
