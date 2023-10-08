#include<bits/stdc++.h>
using namespace std;

int n, price[100], maxProfit[100], numOfPrice, sol[100] , q ;

int rod_cut() ;

int memo_rod_cut( int n );

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
    while( n > 0 )
    {
        cout << sol[n] << " " ;
        n -= sol[n] ;
    }
    cout << endl;
    return 0;
}

int rod_cut()
{
    for ( int i = 0; i < n; i++ )
    {
        maxProfit[i] = -1 ;
    }
    return memo_rod_cut( n ) ;
}

int memo_rod_cut( int n )
{
    if( maxProfit[n]>=0 ) return maxProfit[n] ;
    if( n == 0 ) q = 0 ;
    else 
    {
        q = -1 ;
        for ( int i = 1; i < n; i++ )
        {
            q = max( q, price[i]+ memo_rod_cut(n-1) );
            sol[n] = i ;
        }
        maxProfit[n] = q ;
    }
    return q ;
}