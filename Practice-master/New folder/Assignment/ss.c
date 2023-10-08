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
    
    for ( i = 0; i < end; i++)
    {
        for ( j = 0; j < end ; j++)
        {
            if(std[j].cgpa < std[j+1].cgpa)
            {
                temp = std[j];
                std[j]=std[j+1];
                std[j+1]=temp;
            }
        }
    }

    for( i=0; i<10; i++)
    {
        printf("%s\t",std[i].name);
        printf("%d\t",std[i].roll);
        printf("%f\t",std[i].cgpa);
        printf("%p\n",&std[i]);
        std[i].p=&std[i+1];
    } 
    
    
    FILE *fpn = fopen("s_n.txt","w");    

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
