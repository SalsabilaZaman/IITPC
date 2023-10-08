#include<stdio.h>
#include<string.h>

char words[][2][40]={"Dog","Hund","No","Nein","Year","Jahr","Child","Kind","I","Ich","Drive","Farhen","House","Haus","To","Zu"," "," "};

int main()
{    
    char input[80];
    int i; 
    printf("Enter the Input Word : ");
    gets(input);
    i=0;
    while (strcmp(words[i][0],""))
    {
        if(!strcmp(input,words[i][0]))
        {
            printf("%s : %s",words[i][0],words[i][1]);
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