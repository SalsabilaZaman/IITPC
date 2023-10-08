#include<stdio.h>

int main()
{
    int a, i, j, total=0, t;
    scanf("%d",&a);
    
    int arr[a][3];

    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d ",arr[i][j]);
        }
    }

    if(arr[0][0] > arr[0][1] && arr[0][0] > arr[0][2] ) 
    {
        total = total + arr[0][0];
        t=0;
    }
    else if(arr[0][1] > arr[0][2]) 
    {
        total = total + arr[0][1];
        t=1;
    }
    else 
    {
        total = total + arr[0][2];
        t=2;
    }

    if(a>1)
    {
        for ( i = 1; i < a; i++)
        {
            if(arr[i][0] > arr[i][1] && arr[i][0] > arr[i][2] ) 
            {
                if(t!=0) 
                {
                    total = total + arr[i][0];
                    t=0;
                }
                else 
                {
                    if((arr[i][1] > arr[i][2]) && t!=1) 
                    {
                        total = total + arr[i][1];
                        t=1;
                    }
                    else
                    { 
                        total = total + arr[i][2];
                        t=2;
                    }
                }
            }
        }
    }
    
    printf("%d",total);

    return 0;
}