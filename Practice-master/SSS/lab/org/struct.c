#include<stdio.h>
#include<string.h>
#define n 4

struct student {
    char name[80];
    int roll;
    float cgpa;
    struct student *p;
} bsse14[4];

void sort(float arr[], int size);
void address(float arr[], int arr_index[], int size);

int main()
{
    FILE *fp= fopen("myfile.txt", "r");
    int index[n], i;
    float CGPA[n];

    for(i=0; i<n; i++)
    {
        fscanf(fp, "%s", bsse14[i].name);
        fscanf(fp, "%d", &bsse14[i].roll);
        fscanf(fp, "%f", &bsse14[i].cgpa);
        CGPA[i] = bsse14[i].cgpa;
    }

    fclose(fp);

    sort(CGPA, n);

    address(CGPA, index, n);

    printf("The merit list is-\n");

    printf("%s %d %f %p\n", bsse14[index[0]].name, bsse14[index[0]].roll, bsse14[index[0]].cgpa, &bsse14[index[0]].p);
    
    for (i=0; i<n; i++)
    {
        bsse14[i].p = &bsse14[index[i]];

        printf("%s %d %f %p\n", bsse14[index[i]].p->name, bsse14[index[i]].p->roll, bsse14[index[i]].p->cgpa, bsse14[index[i]].p);
    
       // printf("%d. %s\n", i+1, bsse14[i].p->name);
    }



    printf("%s %d %f %p", bsse14[index[0]].p->name, bsse14[index[0]].p->roll, bsse14[index[0]].p->cgpa, bsse14[index[0]].p);
    /* FILE *ap = fopen("another.txt", "w");

    for (i=0; i<n; i++)
    {
        fprintf(ap, "%s %d %f\n", bsse14[i].p->name, bsse14[i].p->roll, bsse14[i].p->cgpa);
    }

    fclose(ap);

    strcpy(bsse14[0].p->name, "Hello");

    FILE *op= fopen("output.txt", "w");

    for (i=0; i<n; i++)
    {
        fprintf(op, "%s %d %f\n", bsse14[i].name, bsse14[i].roll, bsse14[i].cgpa);
    }

    fclose(op); */ 

    return 0;

}

void sort(float arr[], int size)
{
    int i, j; float swap;

    for (i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            if(arr[j]< arr[j+1])
            {
                swap = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = swap;
            }
        }
    }
}

void address(float arr[], int arr_index[], int size)
{
    int i, j;
    for (i=0; i<size; i++)
    {
        for (j=0; j<size; j++)
        {
            if(arr[i] == bsse14[j].cgpa)
            {
                arr_index[i]= j;
                break;
            }
        }
    }
}


