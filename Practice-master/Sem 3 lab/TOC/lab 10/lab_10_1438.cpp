#include<bits/stdc++.h>
using namespace std ;

bool match = false ;
string str, newStr_left = "" , newStr_right = "" ,  Start = "A1B", P, pre, post ;
int l ;
vector < string > output , output2 ;

void removeChar( char ch )
{
    int i, j ;
    char newStr[ P.length()-1 ];
    for (  i = 0, j = 0; i < P.length() ; )
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
    newStr[j] = '\0' ;
    P = newStr ;
}

void call_B( int i )
{
    if( str[i] == '1' )
    {
        P = pre + "1" + post ;
        return ;
    }
    else 
    {
        P = pre + "0" + post ;
        return ;
    }
}

void call_A( int i )
{
    P = "0" + P ;
    
    return ;
}


void callP( int indx )
{
    P = Start ;
    output.push_back ( P ) ;
    while( str[indx] != '1' && indx < l )
    {
        call_A( indx );
        output.push_back( P );
        indx ++ ;
    }

    int pos = P.find("A") ;
    pre = P.substr( 0, pos ) ;
    post = P.substr( pos+1 ) ;
    P = pre + post ;    
    removeChar('A') ;

    output.push_back( P ) ;
    indx ++ ;
    
    while ( indx < l )
    {
        pos = P.find("B") ;
        pre = P.substr( 0, pos ) ;
        post = P.substr( pos ) ;
        call_B( indx ) ;
        output.push_back( P );
        indx ++ ;
    }

    removeChar('B') ;
    output.push_back( P ) ;
    
}

void callRight( int indx )
{
    int pos ;
    P = Start ;
    output2.push_back ( P ) ;
    while ( str[indx] == '0' )
    {
        indx ++ ;
    }
    
    //output2.push_back( P ) ;
    indx ++ ;
    
    while ( indx < l )
    {
        pos = P.find("B") ;
        pre = P.substr( 0, pos ) ;
        post = P.substr( pos ) ;
        call_B( indx ) ;
        output2.push_back( P );
        indx ++ ;
    }

    removeChar('B') ;
    output2.push_back( P ) ;

    indx = 0 ;
    while( str[indx] != '1' && indx < l )
    {
        call_A( indx );
        output2.push_back( P );
        indx ++ ;
    }

    pos = P.find("A") ;
    pre = P.substr( 0, pos ) ;
    post = P.substr( pos+1 ) ;
    cout << pre << " " << post << endl ;
    P = pre + post ;    
    removeChar('A') ;
    output2.push_back( P ) ;
}


int main()
{
    cout << "Input : " ;
    cin >> str ;
    l = str.length() ;

    for ( int i = 0; i < str.length(); i++ )
    {
        if( str[i]!= '0' && str[i]!= '1')
        {
            cout << "Invalid input." ;
            return 0 ;
        }
    }

    P = "P" ;
    output.push_back( P ) ;
    callP( 0 );
    
    cout << "LeftMost Output : " ;
    
    for ( auto i = output.begin(); i != output.end(); ++i )
    {    
        cout << *i ;
        if(  i != output.end()-1 ) cout << " => " ;
    }

    P = "P" ;
    output2.push_back( P ) ;
    callRight( 0 );
    
    cout << "RightMost Output : " ;
    
    for ( auto i = output2.begin(); i != output2.end(); ++i )
    {    
        cout << *i ;
        if(  i != output2.end()-1 ) cout << " => " ;
    }
}