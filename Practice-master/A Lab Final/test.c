#include<stdio.h>
#include<string.h>

void input_idpass(char *a, char *b);
void encrypt (char *p);

int main()
    {
        char str_email[50], str_password[20], id[5][50], pass[5][50];
        int i, j, u=10, flag=1;
        FILE *fp;
        
        fp = fopen("userfile.txt","r");
        for( i=0,j=0 ; feof(fp)==0 ; i++,j++)
        {
            fscanf(fp,"%s",id[i]);
            fscanf(fp,"%s\n",pass[i]);
        }
        fclose(fp);

        for ( i = 0; i < j; i++)
        {
            printf("%s %s\n",id[i],pass[i]);
        }
        

        while(flag)
        {
            input_idpass(str_email,str_password);
            printf("%s\n",str_email);                         //problem-- Ager func theke ekhane ashe na..
            //encrypt(str_password);
            for( i=0 ; i<j ; i++ )
            {
                printf("%s  %s\n", str_email, id[i]);
                if(!strcmp(str_email,id[i]))
                {
                    printf("%s  %s\n", str_email, id[i]);
                    printf("Id already exists.\nGive another Id.\n");
                    break;
                }
            }
            printf("%d\n",j);
            if(i==j)
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

void input_idpass(char *a, char *b)
    {
        int l=0;
        printf("%s\n",a);
        printf("Enter Your Email address:");
        gets(a);
        printf("%s\n",a);                          
        while(l!=6)
        {
            printf("Enter Password:");
            gets(b);
            l=strlen(b);
            if(l!=6)printf("Invalid size of Passward.\n");
        }  l=strlen(b);
        printf("%d\n",l);
    }

void encrypt (char *p)
    {
        while (*p)
        {
            *p = *p+1;
            printf(p);
            p++;
            
        }
    }