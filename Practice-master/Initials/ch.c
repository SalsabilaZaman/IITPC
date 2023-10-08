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

        if (i>=0 && i<10)
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
                num=num+1;
                break;
            }
        case 2:
            {
                ch=ch+1;
                break;
            }
        case 3:
            {
                punc=punc+1;
                break;
            }

        }

    }
    printf("Total Number : %d\n",num);
    printf("Total Character : %d\n",ch);
    printf("Total Punctuation : %d\n",punc);

    return 0;
}
