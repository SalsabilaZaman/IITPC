#include<stdio.h>
#include<ctype.h>

int count[26];
int main()
{
    FILE *fp;
    char ch;

    if((fp=fopen("file1.txt", "r"))==NULL)
    {
        printf("Error reading file.\n");
        exit(1);
    }

    while((ch=fgetc(fp))!=EOF)
    {
        ch=toupper(ch);
        if(ch>='A' && ch<='Z')
        {
            count[ch-'A']++;
        }
    }
    for(int i=0; i<26; i++)
    printf("Letter %c is %d times\n", 'A'+i,count[i]);
    fclose(fp);
    return 0;
}
