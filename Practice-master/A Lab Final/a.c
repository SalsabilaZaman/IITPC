#include<stdio.h>
#include<string.h>

int u=5;

struct id_pass
{
    char id[50];
    char pass[6];
} usr[5];


void encrypt (char *p);

void decrypt(char *q);


void input_idpass(char *a, char *b);
  
void teacher_sign_in(void);


/*int teacher_login(void)
{
    char email[50], password[10]; 
    FILE *fp= fopen("userfile.txt", "r");
    fscanf(fp, "%s", teacher.email);
    fscanf(fp, "%s", teacher.password);

    decrypt (teacher.password);

    printf("Email address: ");
    scanf("%s", email);
    printf("Password: ");
    scanf("%s", password);

    if (!strcmp(email, teacher.email) && !strcmp(password, teacher.password))
    {
        printf("Login Successful!\n");
        return 1;
    }
    else 
    {
        printf("Wrong email address or password.\n");
        return 0;
    }
}*/


int main()
{
    int i;
    FILE *fp = fopen("userfile.txt","r");
    for( i=0 ; feof(fp)==0 ; i++)
    {
        fscanf(fp,"%s", &usr[i].id);
        fscanf(fp,"%s\n", &usr[i].pass);
    }
    fclose(fp);

    for( i=0 ; i<u ; i++ )
    {
        printf("%s %s\n",usr[i].id,usr[i].pass);
    
    }
    teacher_sign_in();


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
void teacher_sign_in(void)
{
    char str_email[50], str_password[6];
    int i, flag=1;
    FILE *fp;
    
    
    while(flag)
    {
        input_idpass(str_email, str_password );
        encrypt(str_password);
        for( i=0 ; i<u ; i++ )
        {
            if(!strcmp(str_email,usr[i].id))
            {
                printf("Id already exists.\nGive another Id.\n");
                break;
            }
        }
        if(i==u)
        {
            fp = fopen("userfile.txt","r+");
            fseek(fp,0,SEEK_END);
            fprintf(fp,"%s ",str_email);
            
            fprintf(fp,"%s\n",str_password);
            flag=0;
        }
    }
    fclose(fp);
}
