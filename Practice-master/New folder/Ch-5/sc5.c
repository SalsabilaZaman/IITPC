#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int len, i , j, k, count;
    char str[20]={"concatination"};
    printf("Enter the word : - - - - - - - - - - - - \n");
    
    len = strlen(str);

    for(i=0; i<len; i++)
    {
        for(k=0 ; k<i ; k++ )
        {
            printf("%c",str[k]);
            printf("-");
        }
        printf("\n");

        count=0;
        do 
        {
            j=getche();
            count++;
            if(count>5)
            {
                printf("\nOut of move.\n");
                i=-1;
                break;
            }
        }
        while(j!=str[i]);
        if(j==str[i])printf("Matched.\n");
        if(i==-1) break;
    }

    if(i==len) 
    {
        printf("%s\n",str);
        printf("You have Won..");
    }
    else 
    printf("Game Over.!!!");

    return 0;
}