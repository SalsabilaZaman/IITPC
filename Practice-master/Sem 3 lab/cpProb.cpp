#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str ;
    int n ;
    cin >> n ;
    while( n-- )
    {
        cin >> str ;
        for ( int i = 0; i < str[i] ; i++ )
        {
            str[i] = toupper(str[i]);
        }
        if( str == "YES" ) cout << "YES" << endl ;
        else cout << "NO" << endl ;
    }
}