#include<stdio.h>
#include<string.h>

int withdraw(int *i, int amnt )
{
    *i = *i - amnt;
}

int deposit(int *i, int amnt)
{
    *i = *i + amnt;
}

struct bank
{
    char namef[50];
    char namel[50];
    int age;
    int balance;
};

int main()
{
    FILE *fp , *fpn;
    char name1[30], name2[30];
    char str[1000]={""} , t;
    int i, option, amnt, end , user;
    struct bank id[1000];

    fp = fopen("bank_in.txt","r+");
    if ( fp == NULL )
    {
        printf("No such file !");
        return 0;
    }
    
    
    for( i=0; feof(fp)==0 ; i++)
    {
        fscanf(fp,"%c",&t);
        if(t==',') t = ' ';
        str[i] = t;
    }
    
    end=i;
    
    //printf(str);
    //printf("\n");

    fpn=fopen("bank_out.txt","w");

    for(i=0; i<end-1; i++)
    {
        fprintf(fpn,"%c",str[i]);
    }
    fclose(fpn);

    fpn=fopen("bank_out.txt","r");

    for( i=0; feof(fpn)==0 ; i++)
    {
        fscanf(fpn,"%s %s %d %d\n",id[i].namef,id[i].namel,&id[i].age,&id[i].balance);
    }
    end=i;

    for( i=0; i<end ; i++)
    {
        printf("%s %s %d %d\n",id[i].namef,id[i].namel,id[i].age,id[i].balance);
    }
    fclose(fpn);

    printf("User First Name :");
    gets(name1);
    printf("User Second Name :");
    gets(name2);
    for( i=0; i<end; i++)
    {
        if(!strcmp(id[i].namef,name1) && !strcmp(id[i].namel,name2))
        {
            user = i;
            printf("%s %s %d %d\n",id[i].namef,id[i].namel,id[i].age,id[i].balance);
            break;             
        }
        
    }
    if(i==end)
        {
            printf("Invalid User Name.\n");
            return 0;
        }
    
    printf("Which transiction do you want?\n1.Withdraw 2.Deposit\nPress 1/2 :");
    scanf("%d",&option);

    printf("What is the amount:");
    scanf("%d",&amnt);

    if(option==1)
    {   
        withdraw(&id[user].balance, amnt);
        printf("%s %s has new balance Tk.%d.\n",id[user].namef,id[user].namel,id[user].balance);
    }
     else if(option==2)
    {
        deposit(&id[user].balance, amnt);
        printf("%s %s has new balance Tk.%d.\n",id[user].namef,id[user].namel,id[user].balance); 
    }
    else
    {
        printf("Invalid Choice.\n");
    }

    fpn=fopen("bank_out.txt","w");
    for(i=0; i<end; i++)
    {
        fprintf(fpn,"%s,%s,%d,%d\n",id[i].namef,id[i].namel,id[i].age,id[i].balance);
    }
    
    fclose(fp);
    fclose(fpn);
    return 0;
}