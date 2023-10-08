#include<stdio.h>
#include<conio.h>
int main()
{
    char i; 
    int num=0, ch=0, punc=0;
    for( ; ; )
    {
        printf("Enter the key : ");
        i=getche();
        printf("\n");
        if(i=='\r')break;
        
        if (i>='0' && i<='9')
        {
            i=1;
        }
        else if((i>=65 && i<91)||(i>=97 && i<123))
        {
            i=2;
        }
        else
        {
            i=3;
        }
        
        switch (i)
        {
        case 1:
            {
                printf("It's a number.\n");
                num=num+1;
                break;
            }
        case 2:
            {
                printf("It's a letter.\n");
                ch=ch+1;
                break;
            }
        case 3:
            {
                printf("It's a punctuation.\n");
                punc=punc+1;
                break;
            }        
        
        }

    }
    printf("Total Number : %d\n",num);
    printf("Total Alphabet : %d\n",ch);
    printf("Total Punctuation : %d\n",punc);
    
    return 0;
}