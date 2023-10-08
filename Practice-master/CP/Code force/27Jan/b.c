#include<stdio.h>

int main()
{
    int t, n, s, r, l;
    scanf("%d",&t);
    int i=0;
    while(i<t && t<1001)
    {
        scanf("%d %d %d",&n,&s,&r);
        l=s-r;
        if(n>1 && n<51)
        {
            while (n>0)
            {
                if (n==1)
                {
                    printf("%d ",s);
                    break;
                }
                n--;
                printf("%d ",l);
                s = s-l;
                l = s/n;
                
                
            } 
        }
       
        
        printf("\n");  
        i++;
    }

    return 0;
}