#include<stdio.h>
#include<string.h>

int email_valid(char *mail)
{
    int l= strlen(mail);
    int i, j, k; char temp[12];

    for (i=0; mail[i]!= '\0'; i++)
    {
        if (mail[i] == '@')
        {
            k=0;
            for(j=i+1; mail[j] != '\0'; j++)
            {
                temp[k]= mail[j];
                k++;
            }
            temp[k] = '\0';
            if (!strcmp(temp, "gmail.com")) return 1;
            else return 0;
        }
    }
    if (i== l) return 0;
}

int main()
{
    char email[50];
    printf("Enter your email address: ");
    gets(email);
    if (email_valid(email))
        printf("The mail is valid.\n");
    else 
        printf("Invalid email address.\n");
    return 0;
}