#include<bits/stdc++.h>
using namespace std;

#define diagonalArr -1
#define upArr -2
#define leftArr -3

int n, res ;

void printLCS( int sign[100][100], int x, int y , int *str1 )
{
    if( x==0 || y==0 ) return ;
    if ( sign[x][y] == diagonalArr )
    {
        printLCS( sign, x-1 , y-1 , str1);
        cout << str1[x] << endl ;
    }
    else if ( sign[x][y] == upArr )
    {
        printLCS( sign, x-1 , y , str1 ) ;
    }
    else printLCS( sign , x , y-1 , str1 ) ;
    
}

int lcs( int *str1, int *str2 )
{
    int arr[100][100] ;
    int sign[100][100] ;
    for ( int i = 0; i < n; i++)
    {
        arr[0][i] = 0 ;
        arr[i][0] = 0 ;
    }

    for ( int i = 1; i < n; i++ )
    {
        for (int j = 1; j < n; j++)
        {
            if ( str1[i] == str2[j] )
            {
                arr[i][j] = arr[i-1][j-1] + 1 ;
            }
            else
            {
                arr[i][j] = max( arr[i][j-1], arr[i-1][j] );
            }
        } 
    }
    
    for ( int i = 1; i < n; i++ )
    {
        for (int j = 1; j < n; j++)
        {
            if ( str1[i] == str2[j] )
            {
                sign[i][j] = diagonalArr ;
            }
            else if( arr[i-1][j] >= arr[i][j-1] )
            {
                sign[i][j] = upArr ;
            }
            else
            {
                sign[i][j] = leftArr ;
            }
        } 
    }

    cout << "The subsequence : " << endl ;
    printLCS( sign, n-1 , n-1, str1 );

    return arr[n-1][n-1] ;
}

int main()
{
    cout << "Enter the total number : " ;
    cin >> n ;
    n ++ ;
    int str1[n], str2[n] ;
    str1[0] = 0 ;
    str2[0] = 0 ;
    for ( int i = 1; i < n; i++ )
    {
        cin >> str1[i] ;
        str2[i] = str1[i] ;
    }
    sort( str2, str2+n );
    
    int lis = lcs( str1, str2 );
    cout << "LIS length : " << lis ;

}