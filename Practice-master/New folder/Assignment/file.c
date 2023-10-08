#include<stdio.h>
#include<string.h>

struct data
{
    char name[50];
    int roll;
    float cgpa;
}std[10];

int main()
{
    int i, j; 
    float max=0;
    
    FILE *fp;
    fp = fopen("file.txt","r+");
    for( i=0; feof(fp)==0; i++)
    {
        fscanf(fp,"%s",std[i].name);
        fscanf(fp,"%d",&std[i].roll);
        fscanf(fp,"%f",&std[i].cgpa);
        if(std[i].cgpa>max)
        {
            max = std[i].cgpa;
            j = i;
        }
    } 
    fclose(fp);
    for( i=0; i<10; i++)
    {
        printf("%s\t",std[i].name);
        printf("%d\t",std[i].roll);
        printf("%f\n",std[i].cgpa);
    } 
    
    strcpy(std[j].name,"Shakib Sir");
    
    FILE *fpn = fopen("file_n.txt","w");    

   for(i=0; i<10; i++)
   {
        fprintf(fp,"%s\t",std[i].name);
        fprintf(fp,"%d\t",std[i].roll);
        fprintf(fp,"%f\n",std[i].cgpa);
   }
    fclose(fpn);

    return 0;
}