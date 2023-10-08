#include<stdio.h>
#include<string.h>

struct student
{
    char name[50];
    int roll;
    float cgpa;
    struct student *nxt;
}bsse[52];

int main()
{
    int i, j, store[52];
    float temp, cgpa[52];
    FILE *fp;
    fp=fopen("ss.txt","r");
    for ( i = 0; i < 52; i++)
    {
        fscanf(fp,"%s %d %f",bsse[i].name,&bsse[i].roll,&bsse[i].cgpa);
        cgpa[i]=bsse[i].cgpa;
    }
    fclose(fp);

    for( i = 0 ; i < 52 ; i++)
    {
        for ( j = 0; j < 52 ; j++)
        {
            if(cgpa[i]>cgpa[j])
            {
                temp=cgpa[j];
                cgpa[j]=cgpa[i];
                cgpa[i]=temp;
            }
        }
    }

    for( i = 0 ; i < 52 ; i++)
    {
        for ( j = 0; j < 52 ; j++)
        {
            if(cgpa[i]==bsse[j].cgpa)
            {
                store[i]=j;
                break;
            }
        }
    }
    for( i=0 ; i<52 ; i++)
    {
        bsse[store[i]].nxt=&bsse[store[i+1]];
    }
    printf("Merit List :\n");
    printf("%s\n",bsse[store[0]].name);
    for ( i = 0; i < 52 ; i++)
    {
        printf("%s\n",bsse[store[i]].nxt->name);
    }
    
    return 0;
}
