#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argC, char *argV[])
{
    char str[80];
    int count=0;
    FILE *fp;

    fp=fopen(argV[1], "r");

    while(!feof(fp))
    {
        fgets(str, 79, fp);
        printf("%s", str);
        count++;

        if(count==23)
        {
            printf("More?(y/n)");
            gets(str);
            if(toupper(*str)=='N')
                break;
            count=0;
        }
    }
    fclose(fp);

    return 0;
}
