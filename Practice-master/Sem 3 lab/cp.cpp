#include<bits/stdc++.h>
using namespace std;

string P ;

void change( int *num )
{
    *num = 10 ;
    cout << *num << endl ;
}
string revStr( string input )
{
    string reve = "" ;
    for ( int i = input.length()-1; i >= 0 ; i-- )
    {
        reve += input[i] ;
    }
    return reve ;
}
void removeChar( char ch )
{
    //string newStr = "" ;
    char newStr[ P.length()-1 ];
    for ( int i = 0, j = 0; i < P.length() ; )
    {
        if( P[i] == ch ) 
        {
            i++ ;
            continue ;
        }
        newStr[j] = P[i];  
        i++ ;
        j++ ;
    }
    P = newStr ;
}

int main()
{ 
    P = "Hello!" ;
    cout << P << endl ;
    removeChar('e');
    cout << P << endl ;


}

