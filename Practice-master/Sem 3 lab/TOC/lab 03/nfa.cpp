#include<bits/stdc++.h>
using namespace std;

int alphabet, stateNo, check = 0, trans ;
char intState, finalState , curr_state ;
char nfa[10][10][10] , states[10], alpha[10] ;
string str , path ;

int alphIndex( char curr )
{
    for ( int j = 0; j < alphabet; j++ )
    {
        if( curr == alpha[j] ) return j;
    }
    return -1 ;
}

int stateIndex( char curr )
{
    for( int k = 0 ; k < stateNo ; k++ )
    {
        if( states[k] == curr ) return k ;
    }
    return -1 ;
}

void nfaTraverse( int index, char curr_state )
{
    int i, j , k=0 ;
    i = stateIndex( curr_state ) ;
    j = alphIndex( str[index] ) ;

    if ( str[index] == '\0' && curr_state != finalState ) return ;
    if( curr_state == '\0' ) return ;
    path += curr_state ;
    if( str[index] == '\0' && curr_state == finalState )
    {
        check = 1 ;
        return ;
    }

    while ( nfa[i][j][k] )
    {
        curr_state = nfa[i][j][k] ;
        nfaTraverse ( index+1 , curr_state );
        k++ ;
    }

}


int main()
{
    cout << "Enter number of states : " ;
    cin >> stateNo ;

    states[stateNo];
    cout << "Enter the states :\n" ;
    for ( int  i = 0; i < stateNo; i++ )
    {
        cin >> states[i] ;
    }

    cout << "Enter number of elements in the alphabet : ";
    cin >> alphabet ;

    alpha[alphabet] ;
    cout << "Enter the alphabet elements : " ;
    for ( int  i = 0; i < alphabet; i++ )
    {
        cin >> alpha[i] ;
    }
    
    nfa[stateNo][alphabet][stateNo] ;
    
    for ( int i = 0; i < stateNo ; i++ )
    {
        for (int j = 0; j < alphabet; j++)
        {
            for ( int l = 0; l < stateNo; l++ ) 
            {
                nfa[i][j][l] = '\0' ;
            }
        }
    }
    
    cout << "Enter the number of transitions :\n" ;
    cin >> trans ;
    
    char pre, alp, post;
    cout << "Enter the transitions: \nPreState <space> Alphabet <space> PostState\n" ;
    while ( trans-- )
    {
        int i, j, k=0 ;
        cin >> pre >> alp >> post ;
        for ( i = 0; i < stateNo; i++ )
        {
            if( states[i] == pre ) break;
        }
        for ( j = 0; j < alphabet; j++ )
        {
            if( alpha[j] == alp ) break;
        }
        while ( nfa[i][j][k] )
        {
            k ++ ;
        }
        nfa[i][j][k] = post ;
    }
    
    
    cout << "\nTrasitions: " << endl ;
    for ( int i = 0; i < stateNo ; i++ )
    {
        for (int j = 0; j < alphabet; j++)
        {
            if( nfa[i][j][0] == '\0' ) continue;
            cout << "From " << states[i] << " by " << alpha[j] << " : " ;
            for ( int l = 0; nfa[i][j][l] ; l++)
            {
                cout << nfa[i][j][l] << " " ;
            }
            cout << endl ;
        }
    }

    cout << "Enter initial state :" ;
    cin >> intState ;
    cout << "Enter final state : " ;
    cin >> finalState ;
    
    
    cout << "Enter the String : ";
    cin >> str ; 

    curr_state = intState ;
    nfaTraverse( 0, curr_state );
    if( check )
    {
        cout << "Accepted." << endl ;
        cout << "The pathway : " << path << endl ;

    }
    else cout << "Rejected." ;

}


/*
   0  1
A  B  A
B     C
C     


3
A B C
2
0 1
4
A 0 A
A 1 A
A 0 B
B 1 C
A
C


*/ 