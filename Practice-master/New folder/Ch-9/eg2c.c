#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[80]="This is a file system test.\n";
    FILE *fp;
    char *p, ch;
    
    if((fp=fopen("myfile","w"))==NULL)
    {
        printf("Can't open file.\n");
        exit(1);
    }
    p=str;
    while (*p)
    {
        if(fputc(*p++,fp)==EOF)
        {
            printf("Error writing file.\n");
            exit(1);
        }
    }
    fclose(fp);

    if((fp=fopen("myfile","r"))==NULL)
    {
        printf("Can't open file.\n");
        exit(1);
    }
    while((ch=fgetc(fp))!=EOF)
    {
        putchar(ch);
    }
    fclose(fp);

    return 0;
}