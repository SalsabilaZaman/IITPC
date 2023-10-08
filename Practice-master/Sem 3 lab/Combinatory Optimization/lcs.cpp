#include<bits/stdc++.h>
using namespace std;

#define diagonalArr -1
#define upArr -2
#define leftArr -3

int m, n;
string str1 = " ", str2 = " " ;

void printLCS( int sign[][100], int x, int y )
{
    if( x==0 || y==0 ) return ;
    if ( sign[x][y] == diagonalArr )
    {
        printLCS( sign, x-1 , y-1 );
        cout << str1[x] << endl ;
    }
    else if ( sign[x][y] == upArr )
    {
        printLCS( sign, x-1 , y ) ;
    }
    else printLCS( sign , x , y-1 ) ;
    
}

int main()
{
    string str;
    cout << "Enter the first string :" ;
    cin >> str ;
    str1 = str1 + str ;
    cout << "Enter the second string :" ;    
    cin >> str ;
    str2 = str2 + str ;   
    
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

    for ( int i = 1; i < m; i++ )
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
    
    for ( int i = 1; i < m; i++ )
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

    // for ( int i = 1; i < m; i++ )
    // {
    //     for (int j = 1; j < n; j++)
    //     {
    //         cout << arr[i][j] << ","<< sign[i][j] << "  " ;
    //     }
    //     cout << endl ;
    // }

    cout << "LCS length : " << arr[m-1][n-1] << endl ;
    cout << "The subsequence :" << endl ;
    printLCS( sign, m-1 , n-1 );
}