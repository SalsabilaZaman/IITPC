#include<stdio.h>
#include<stdlib.h>

int main(int argC, char *argV[])
{
    FILE *fp;
    long loc;

    if(argC!=2)
    {
        printf("Not enough arguements\n");
        exit(1);
    }
    fp= fopen(argV[1], "rb");

    printf("Enter byte to seek: ");
    scanf("%ld", &loc);
    if(fseek(fp, loc, SEEK_SET))
    {
        printf("Seek error");
        exit(1);
    }
    printf("Value at loc %ld is %d", loc, getc(fp));
    fclose(fp);
    return 0;
}
