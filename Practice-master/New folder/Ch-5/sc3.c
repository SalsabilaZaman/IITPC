#include<stdio.h>

int main()
{
    int len, i ,j, space=0, comma=0, periods=0;
    char str[200]={""};
    printf("Enter the string : \n");
    gets(str);
    len = strlen(str);

    for(i=0; i<len; i++)
    {
        //j=str[i];

        switch (str[i])
        {
            case ' ':
                space++;
                break;
            case ',':
                comma++;
                break;
            case '.':
                periods++;
                break;
            
            default:
                break;
        }
    }

    printf("Spaces : %d\nCommas : %d\nPeriods : %d\n",space,comma,periods);

    return 0;
}