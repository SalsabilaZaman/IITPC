#include<bits/stdc++.h>
using namespace std;

#define insert 1
#define delete 2
#define substitute 3
#define nothing 4

int arr[20][20];
int ed[20][20] ;

int min(int x, int y, int z);

int main ()
{
    string given, req ;
    cout << "Enter the given and required string :" ;
    cin >> given >> req ;
    int m , n ;
    
    m = given.length() ;
    n = req.length() ;
    //int arr[m][n] ;
    int x, y, z ;

    for ( int i = 0; i < m; i++ )
    {
        arr[i][0] = i ;
        ed[i][0] = delete ;
    }
    for ( int i = 0; i < n; i++ )
    {
        arr[0][i] = i ;
        ed[0][i] = insert ;
    }
    
    for ( int i = 0; i < m; i++ )
    {
        for ( int j = 0; j < n; j++ )
        {
            cout << arr[i][j] << " " ;
            
        }
        cout << endl ;
    }
    
    for ( int i = 1; i < m; i++ )
    {
        for ( int j = 1; j < n; j++ )
        {
            arr[i][j] = min( i, j, arr[i-1][j-1]) + 1 ;
        }
    }
            
    
    for ( int i = 1; i < n; i++ )
    {
        for ( int j = 1; j < n; j++ )
        {
            x = arr[i-1][j-1]  ;
            y = arr[i-1][j]  ;
            z = arr[i][j-1]  ;
            int minimum = min( i, j, arr[i-1][j-1] ) + 1;

            if ( given[i-1] != req[j-1] )
            {
                if( minimum == x ) ed[i][j] = substitute ;
                if( minimum == y ) ed[i][j] = delete ;
                if( minimum == z ) ed[i][j] = insert ;
            }
            else
            {
                ed[i][j] = nothing ;
                arr[i][j] = arr[i-1][j-1] ;
            } 

            
        }
    }

    cout << arr[m][n] ;


    // for ( int i = 0; i < m; i++ )
    // {
    //     for ( int j = 0; j < n; j++ )
    //     {
    //         cout << arr[i][j] << " " ;
            
    //     }
    //     cout << endl ;
    // }

    

}

int min(int x, int y, int z)
{
    if (x < y && x < z)
        return x;
    else if (y < x && y < z)
        return y;
    else
        return z;
}