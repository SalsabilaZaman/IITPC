#include<stdio.h>
#include<string.h>

int main()
{
    char ques[100];
    char *res[3]={"Yes.","No.","Maybe. Rephrase the question."};

    int i=0, l;

    do
    {
        printf("Enter the Question : ");
        gets(ques);
        l = strlen(ques);
        i = l % 3;
        printf("%s\n",res[i]);
    }while(i==2);
    
    return 0;
} 