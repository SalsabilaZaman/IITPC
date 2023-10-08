#include<stdio.h>

void main()
{
    char str[]="This is a file system test.\n",*p;
    int i;
    FILE *fp;

    if((fp= fopen("file.txt", "w"))==NULL)
    {
        printf("file cannot be written");
        exit(1);
    }
    p=str;
    while(*p)
    {
        if(fputc(*p, fp)==EOF)
        {
            printf("Error");
            exit(1);
        }
        p++;
    }
    fclose(fp);

    if((fp=fopen("file.txt", "r"))==NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    for(;;)
    {
        i=fgetc(fp);
        if(i==EOF)
            break;
        putchar(i);
    }
    fclose(fp);
}
