#include<stdio.h>

int main()
{
    char num[][10]={"One","Two","Three"};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if(i!=j && j!=k && i!=k)
                {
                    printf("%s %s %s\n",num[i],num[j],num[k]);
                }
            }
        }
    }
    
    
    return 0;
} 