#include<bits/stdc++.h>
using namespace std;

int n, price[100], maxProfit[100], numOfPrice, sol[100] ;

int rod_cut() ;

int main()
{
    int i,j;
    numOfPrice = 10;
    freopen("input_rod.txt","r",stdin);
    scanf("%d",&n);
    for(i=1; i<=numOfPrice; i++)
    {
        scanf("%d",&price[i]);
    }
    
    cout<<"Rod length: "<< n << endl ;

    printf("Max maxProfit: %d\n",rod_cut() ) ;
    while(n > 0)
    {
        cout << sol[n] << " " ;
        n -= sol[n] ;
    }
    cout << endl;
    return 0;
}

int rod_cut()
{
    int i, j, q ;
    maxProfit[0] = 0;
    for(i=1; i<100; i++) 
    {
        sol[i] =- 1;
    }
    for(i=1; i<=n; i++) 
    {
        q=-1;

        for(j=1;j<=i;j++)
        {
            //q=max(q,price[j]+maxProfit[i-j]);
            if( q < (price[j] + maxProfit[i-j]) )
            {
                q = price[j] + maxProfit[i-j] ;
                sol[i] = j ;
            }
        }

        maxProfit[i] = q ;
    }
    return maxProfit[n] ;
}