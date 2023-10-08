#include<stdio.h>
#include<stdlib.h>

int main(int arg, char *argv[])
{
    FILE *fp1, *fp2;
    char ch1, ch2, same;
    unsigned long l;

    if(arg!=3)
    {
        printf("Copy : compare <file 1> <file 2>\n");
        exit(1);
    }
    
    if( (fp1 = fopen(argv[1],"rb"))==NULL )
    {
        printf("Can't open first file.\n");
            exit(1);
    }

    if( (fp2 = fopen(argv[2],"rb"))==NULL )
    {
        printf("Can't open second file.\n");
            exit(1);
    }

    l=0;
    same=1;

    while ( !feof(fp1))
    {
        ch1 = getc (fp1);
        if(ferror(fp1))
        {
            printf("Error reading first file .\n");
            exit(1);
        }

        ch2 = getc (fp2);
        if(ferror(fp2))
        {
            printf("Error reading second file .\n");
            exit(1);
        }

        if(ch1!=ch2)
        {
            printf("Files differ at byte number %lu\n",l);
            same=0;
            break;
        }
        l++;    
    }
    
    if(same)
        {
            printf("Files are the same.\n");
        }

    if(fclose(fp2)==EOF)
    {
        printf("Error closing first file.\n");
        exit(1);
    }

    if(fclose(fp1)==EOF)
    {
        printf("Error closing second file.\n");
        exit(1);
    }

    return 0;
}