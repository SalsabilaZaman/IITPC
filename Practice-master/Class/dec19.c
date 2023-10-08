#include<stdio.h>
#include<string.h>

int withdraw(int *i, int amnt, int usr )  //i[]
{
    i[usr] = i[usr] - amnt;
}

int deposit(int *i, int amnt, int usr )
{
    i[usr] = i[usr] + amnt;
}

int main()
{
    FILE *fp ;
    char str1[10][70], name[30];
    int str2[10];
    int i, option, amnt;

    fp = fopen("file.txt","r");
    if ( fp == NULL )
    {
        printf("No such file !");
        return 0;
    }
    
    for( i=0; feof(fp)==0 ; i++)
    {
        fscanf(fp,"%s %d",&str1[i],&str2[i]);
    }

    for( i=0; feof(fp)==0 ; i++)
    {
        printf("%s --> %d\n",str1[i],str2[i]);
    }

    printf("User Name : ");
    gets(name);
    for( i=0; i<10; i++)
    {
        if(!strcmp(str1[i],name))break;
    }
    if(i==10)
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
        withdraw(str2, amnt, i);
        printf("%s has balance Tk.%d.\n",str1[i],str2[i]);
    }
    if(option==2)
    {
        deposit(str2, amnt, i);
        printf("%s has balance Tk.%d.\n",str1[i],str2[i]); 
    }
    
    
    fclose(fp);

    return 0;
}