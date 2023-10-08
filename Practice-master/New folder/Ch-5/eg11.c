#include<stdio.h>
#include<string.h>

char words[][2][40]={"Dog","Hund","No","Nein","Year","Jahr","Child","Kind","I","Ich","Drive","Farhen","House","Haus","To","Zu"," "," "};

int main()
{    
    char english[80];
    int i; 
    printf("Enter English Word : ");
    gets(english);
    i=0;
    while (strcmp(words[i][0],""))
    {
        if(!strcmp(english,words[i][0]))
        {
            printf("German pronounciation is : %s",words[i][1]);
            break;
        }
        i++;
    }

    if(!strcmp(words[i][0],""))
    {
        printf("Not found in the Dictionary.\n");
    }
       
    return 0;
}