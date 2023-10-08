#include<stdio.h>

int n=52;

struct student {
    char name[80];
    int roll;
    float cgpa;
    struct student *p;
} bsse14[52], temp;

int main(void)
{
    FILE *fp= fopen("myfile.txt", "r");
    int i, j;

    for(i=0; i<n; i++)
    {
        fscanf(fp, "%s", bsse14[i].name);
        fscanf(fp, "%d", &bsse14[i].roll);
        fscanf(fp, "%f", &bsse14[i].cgpa);
    }

    fclose(fp);

    for (i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if (bsse14[j].cgpa < bsse14[j+1].cgpa)
            {
                temp= bsse14[j];
                bsse14[j]= bsse14[j+1];
                bsse14[j+1]= temp;
            }
           
        }
    }


    printf("MERIT LIST\n");
    for (i=0; i<n; i++)
    {
        printf("%d. %s\n", i+1, bsse14[i].name);
    }

    return 0;
}