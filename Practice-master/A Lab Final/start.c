#include<stdio.h>
#include<string.h>
#include<conio.h>

#define u 100

struct id_pass
    {
        char id[50];
        char pass[7];
    
    } usr[u];

int end = 3;


void user_list();

void encrypt (char *p);

void decrypt(char *q);

void input_idpass(char *a, char *b);
  
void reg(void);

int login(void);

void cng_pass();

void user_list();

void search_user();


////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
 
    int i;
    FILE *fp;
    
    char c='1';
    
    while(c)
    {
        fp= fopen("userfile.txt","r");
        for( i=0 , end=0 ; feof(fp)==0 ; i++, end++)
        {
            fscanf(fp,"%s", &usr[i].id);
            fscanf(fp,"%s\n", &usr[i].pass);
        }
        fclose(fp);
        
        printf("\n");
        printf("------\nMenu:\n------\n");
        printf("a. Registration\nb. Login\nc. Change Password\n");
        printf("d. Search User \ne. User list\nf. Quit\n\n");
        printf("Enter Your Choice: ");
        c=getche();
        printf("\n");
        switch (c)
        {
        case 'a':
            reg();
            break;
        case 'b':
            login();
            break;
        case 'c':
            cng_pass();
            break;
        case 'd':
            search_user();
            break;
        case 'e':
            user_list();
            break;
        case 'f':
            return 0;
            break;
        
        default:
            printf("Invalid Input.\n");
            break;
        }
    }
    
    return 0;

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////


void user_list()
{
    printf("\nUser List:\n");

    for(int i=0 ; i<end ; i++ )
    {
        printf("%d. %s .\n",i+1,usr[i].id);
    }
    printf("Press Any Key :");
    getche();
}


void encrypt (char *p)
{
    while (*p)
    {
        *p = *p+1;
        p++;
    }
}

void decrypt(char *q)
{
    while (*q)
    {
        *q = *q-1;
        q++;
    }
}


void input_idpass(char *a, char *b)
    {
        int l=0;
        printf("Enter Your Email address:");
        gets(a);
        while(l!=6)
        {
            printf("Enter Password:");
            gets(b);
            l=strlen(b);
            if(l!=6)printf("Invalid size of Passward.\n");
        }
    }


void reg(void)
    {
        char str_email[50], str_password[20];
        int i, end=0, flag=1;
        FILE *fp;
        fp = fopen("userfile.txt","r");
        for( i=0 ; feof(fp)==0 ; i++)
        {
            fscanf(fp,"%s", &usr[i].id);
            fscanf(fp,"%s\n", &usr[i].pass);
            end++;
        }
        fclose(fp);

        while(flag)
        {
            input_idpass(str_email, str_password );
            encrypt(str_password);
            for( i=0 ; i<end ; i++ )
            {
                if(!strcmp(str_email,usr[i].id))
                {
                    printf("Id already exists.\nGive another Id.\n");
                    break;
                }
            }

            if(i==end)
            {
                fp = fopen("userfile.txt","r+");
                fseek(fp,0,SEEK_END);
                fprintf(fp,"%s ",str_email);
                fprintf(fp,"%s\n",str_password);
                flag=0;
            }
        }
        printf("New Id registered..");

        fclose(fp);
        printf("Press Any Key :");
        getche();
    }


int login(void)
{
    char email[50], password[20]; 
    int i;
    
    FILE *fp = fopen("userfile.txt","r");
    for( i=0 ; feof(fp)==0 ; i++)
    {
        fscanf(fp,"%s", usr[i].id);
        fscanf(fp,"%s\n", usr[i].pass);
        decrypt (usr[i].pass);
    }
    fclose(fp);
    
    printf("Email address:");
    gets(email);
    printf("Password:");
    gets(password);

    for(i=0; i<end; i++)
    {
        if (!strcmp(email, usr[i].id) && !strcmp(password, usr[i].pass))
        {
            printf("Login Successful!\n");
            break;
        }    
    }
    if(i==end)
    {
        printf("Wrong User ID or Password.\n");
    }
    printf("Press Any Key :");
    getche();
}


void cng_pass()
{
    char email[50], password[20], n1[20], n2[20]; 
    int i,j;
    
    FILE *fp = fopen("userfile.txt","r");
    for( i=0 ; feof(fp)==0 ; i++)
    {
        fscanf(fp,"%s", usr[i].id);
        fscanf(fp,"%s\n", usr[i].pass);
        decrypt (usr[i].pass);
    }
    fclose(fp);
    
    printf("Email address:");
    gets(email);
    printf("Password:");
    gets(password);

    for( i=0 ; i<end ; i++ )
    {
        if (!strcmp(email,usr[i].id) && !strcmp(password,usr[i].pass))
        {
            printf("Logged in. \n");
            do
            {
                printf("New Password:");
                gets(n1);
                printf("Re-write new Password:");
                gets(n2);
            } while( strcmp(n1,n2) );
            strcpy(usr[i].pass,n1);
            encrypt (usr[i].pass);  
            printf("Password Changed.");
            break;
        }
    }
    if(i==end) 
        {
            printf("Wrong User ID or Password.\n");
        }

    FILE *fpn = fopen("userfile.txt","w");    

    for(i=0; i<end; i++)
    {
            fprintf(fp,"%s ",usr[i].id);
            fprintf(fp,"%s\n",usr[i].pass); 
    }
    fclose(fpn);
    printf("Press Any Key :");
    getche();
}


void search_user()
{
    char email[50]; 
    int i;

    printf("Email address:");
    scanf("%s", &email);

    for( i=0 ; i<end ; i++ )
    {
        if (!strcmp(email, usr[i].id))
        {
            printf("Found User.\n");
            printf("User Id name : %s\n",usr[i].id);
            break;
        }
    }
    if(i==end) 
        {
            printf("User Not found.\n");
        }
    printf("Press Any Key :");
    scanf("%c");
    getche();
}