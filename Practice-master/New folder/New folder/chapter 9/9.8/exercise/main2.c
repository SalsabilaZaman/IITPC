#include<stdio.h>
#include<ctype.h>

int main(int argC, char *argV[])
{
    FILE *fp;
    char str[80];

    fp= fopen(argV[1], "r");

    while(!feof(fp))
    {
        fgets(str, 10, fp);
        if(!feof(fp))
            printf("%s", str);
        printf("Do you want more?(y/n)");
        if(toupper(getchar())=='N')
            break;
        printf("\n");
    }
    fclose(fp);
    return 0;
}
