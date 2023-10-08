#include<stdio.h>
#include<string.h>

int main()
{
    int t,i=0, count;
    char in[31], ch[31]={"314159265358979323846264338327"};
    ch[31]='\0';
    scanf("%d",&t);
    scanf("%c");
    
    if(t<1001)
    {
        for(int j=0 ; j<t ; j++)
        {
            i=0;
            count=0;
            scanf("%s",in);
            while (in[i]!='\0')
            {
                if(in[i]==ch[i])
                {
                    count++;
                }
                else break;
                i++;
            }
            printf("%d\n",count);
    
        }
        
    }
    return 0;
}