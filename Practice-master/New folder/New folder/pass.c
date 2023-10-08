#include<stdio.h>
#include<string.h>
#include<conio.h>

char correct[100]="BSSE8TH";

int login(void);
int reset(void);

int main()
{

    login();

    return 0;
}

int login(void)
{

    char pass[100], r;
    int i;
    for( i=0;i<3;i++)
    {
        printf("Enter password: ");
        scanf("%s",pass);
        if(!strcmp(pass,correct))
        {
            printf("Login Successful !\n");
            break;
        }   
    }
    if(i==3) 
    {
        printf("Access Denied\n");
        printf("Do you want to reset ? Y/N ");
        r=getche();
        if(r=='Y') reset();
        else return 0;
    }
}

int reset(void)
{
    char str[10];
    printf("What is your favourite pet?:\n");
    scanf("%s",str);
    if(!strcmp(str,"Dog"))
    {
        printf("Enter new password: ");
        scanf("%s",correct);
        login();
    }
    else
    {
        printf("Wrong answer.\n");
    }
}