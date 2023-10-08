#include<stdio.h>
#include<stdlib.h>

int main(int arg, char *argv[])
{
    FILE *from, *to;
    char ch;
    
    if(arg!=3)
    {
        printf("Copy : find <file name> <ch>\n");
        exit(1);
    }
    
    if( (from = fopen(argv[1],"rb"))==NULL )
    {
        printf("Can't open source file.\n");
            exit(1);
    }

    if( (to = fopen(argv[1],"wb"))==NULL )
    {
        printf("Can't open destination file.\n");
            exit(1);
    }

    while ( !feof(from))
    {
        ch = getc (from);
        if(ferror(from))
        {
            printf("Error reading source file .\n");
            exit(1);
        }
    
        if(ferror(from)) fputc(ch, to);
        if(ferror(to))
        {
            printf("Error writing destination file .\n");
            exit(1);
        }
    }

    if(fclose(to)==EOF)
    {
        printf("Error closing source file.\n");
        exit(1);
    }

    if(fclose(from)==EOF)
    {
        printf("Error closing destination file.\n");
        exit(1);
    }

    return 0;
}