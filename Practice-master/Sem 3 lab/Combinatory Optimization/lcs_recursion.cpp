#include<bits/stdc++.h>
using namespace std;

int m, n, l[100];
string str1 , str2 , strLCS ;
int LCS[100][100] ;


int lcs( int m, int n )
{
    if (m == 0 || n == 0)
    {
        return 0;
    }
    if( LCS[m][n] > 0 ) return LCS[m][n] ;
        
    if ( str1[ m-1 ] == str2[ n-1] )
    {
        strLCS += str1[ m-1 ] ;
        LCS[m][n] = ( 1 + lcs(  m - 1, n - 1 )) ;
        return LCS[m][n] ;
    }
    else
    {
        return max( lcs( m, n - 1 ) , lcs( m - 1, n )  ) ;
    }
    
}


int main()
{
    string str;
    cout << "Enter the first string :" ;
    cin >> str1 ;
    cout << "Enter the second string :" ;    
    cin >> str2 ; 
    
    m = str1.length() , n = str2.length() ;

    int arr[100][100] ;
    int sign[100][100] ;
    for ( int i = 0; i < m; i++)
    {
        arr[0][i] = 0 ;
    }
    for ( int i = 0; i < n; i++)
    {
        arr[i][0] = 0 ;
    }
    
    cout << "LCS length : " << lcs( m, n ) << endl ;
    // for ( int i = 0; i < m; i++ )
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << LCS[i][j] << "  " ;
    //     }
    //     cout << endl ;
    // }
    cout << "The subsequence : " << strLCS << endl ;

    
    
}