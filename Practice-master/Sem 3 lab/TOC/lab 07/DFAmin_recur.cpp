#include<bits/stdc++.h>
using namespace std;

int minimization[10][10];
int dfa[10][10] ;
int finalStateIndex, stateNo ;

int getIndex( char ch , char *states )
{
    for( int k=0; k < 8 ; k++ )
    {
        if( states[k] == ch )
        {
            return k ;
        }
    } 
    return -1 ;
}

int minimize( int ch1 ,int ch2, int i, int j, int k )
{ 
    if( minimization[i][j] <= 1 ) return minimization[i][j] ;
    if( k == stateNo ) return 0 ;
    if ( (dfa[i][0] == finalStateIndex && dfa[j][0] == finalStateIndex) || (dfa[i][1] == finalStateIndex && dfa[j][1] == finalStateIndex) )
    {
        minimization[ch1][ch2] = 1 ;
        return 1 ;
    }
    else if( (dfa[i][0] != finalStateIndex && dfa[j][0] != finalStateIndex) && (dfa[i][1] != finalStateIndex && dfa[j][1] != finalStateIndex) )
    {
        k ++ ;
        if( (dfa[i][1] != finalStateIndex && dfa[j][1] != finalStateIndex) )
        {
            minimization[ch1][ch2] = minimize ( ch1, ch2, dfa[ch1][1], dfa[ch2][1], k );
        }  
        if( (dfa[i][0] != finalStateIndex && dfa[j][0] != finalStateIndex) && (minimization[ch1][ch2] != 1 || minimization[ch1][ch2] != 0) )
        {
            minimization[ch1][ch2] = minimize ( ch1, ch2, dfa[i][0], dfa[j][0], k );
        }
    }
    else
    {
        minimization[ch1][ch2] = 0 ;
    }
    return minimization[ch1][ch2] ;
}

int main()
{
    int alphabet, check = 0 ;
    char intState, finalState , temp ;
    cout << "Enter number of states : " ;
    cin >> stateNo ;
    char states[stateNo];
    bool raechable[stateNo];
    cout << "Enter the states :\n" ;
    for ( int  i = 0; i < stateNo; i++ )
    {
        cin >> states[i] ;
        raechable[i] = false ;
    }

    cout << "Enter number of elements in the alphabet : ";
    cin >> alphabet ;
    char alpha[alphabet] ;
    cout << "Enter the alphabet elements : " ;
    for ( int  i = 0; i < alphabet; i++ )
    {
        cin >> alpha[i] ;
    }
    
    // int dfa[stateNo][alphabet] ;
    char tempChar ; 
    cout << "Enter the transitions :\n" ;
    for ( int i = 0; i < stateNo ; i++ )
    {
        for (int j = 0; j < alphabet; j++)
        {
            cout << "From " << states[i] << " by " << alpha[j] << " : ";
            cin >> tempChar ;
            dfa[i][j] = getIndex( tempChar, states );
        }
    }

    cout << "\nTrasitions: " << endl ;
    for ( int i = 0; i < stateNo ; i++ )
    {
        for (int j = 0; j < alphabet; j++)
        {
            cout << "From " << states[i] << " by " << alpha[j] << " : " ;
            cout << states[dfa[i][j]] << endl;
        }
    }
    for ( int i = 0; i < stateNo ; i++ )
    {
        cout << states[i] << " -> " ;
        for (int j = 0; j < alphabet; j++)
        {
            cout << states[dfa[i][j]] << " " ;
        }
        cout << endl ;
    }
    
    cout << "Enter initial state :" ;
    cin >> intState ;
    cout << "Enter final state : " ;
    cin >> finalState ;

    finalStateIndex = getIndex( finalState, states );

    // initialization :

    for ( int i = 0; i < stateNo; i++ )
    {
        for ( int j = 0; j < stateNo; j++ )
        {
            if( i == j ) minimization[i][j] = 1 ;
            else if ( i == finalStateIndex || j == finalStateIndex )
            {
                minimization[i][j] = 0 ;
            }
            else minimization[i][j] = 5 ;
        }
    }

    
    // for ( int i = 0; i < stateNo; i++ )
    // {
    //     cout << states[i] << "  " ;
    //     for ( int j = 0; j <= i; j++ )
    //     {
    //         cout << minimization[i][j] << "  " ;
    //     }
    //     cout << endl ;
    // }
    // cout << " " ;
    // for ( int i = 0; i < stateNo; i++ )
    // {
    //     cout << "  " << states[i]  ;
    // }
    // cout << endl ;

    int check1, check2 ;

    for ( int i = 0; i < stateNo; i++ )
    {
        for ( int j = 0; j < i; j++ )
        {
            if( minimization[i][j] )
            {
                minimization[i][j] = minimize ( i , j , i, j, 0 ) ;
            }
        }
    }
    
    for ( int i = 0; i < stateNo; i++ )
    {
        cout << states[i] << "  " ;
        for ( int j = 0; j <= i; j++ )
        {
            cout << minimization[i][j] << "  " ;
        }
        cout << endl ;
    }
    cout << " " ;
    for ( int i = 0; i < stateNo; i++ )
    {
        cout << "  " << states[i]  ;
    }
    

    // for( int i = 0 ; i < stateNo; i++ )
    // {
    //     for( int j = 0 ; j < stateNo; j++ )
    //     {

    //     }
    // }
    cout << "\nNew Trasitions: " << endl ;
    for ( int i = 0; i < stateNo ; i++ )
    {
        for (int j = 0; j < i; j++)
        {
            if( minimization[i][j] == 1 )
            {
                cout << states[i] << " = " ;
                cout << states[j] << endl;

                for( int k=0; k < stateNo; k++ )
                {
                    for( int l=0; l < alphabet; l++ )
                    {
                        if( dfa[k][l] == i )
                        {
                            dfa[k][l] = j ;
                        }
                    }
                }
                for( int k=0; k<alphabet; k++ ) 
                {
                    dfa[i][k] = -1 ;
                }
            }
        }
    }

    for ( int i = 0; i < stateNo ; i++ )
    {
        if( dfa[i][0] == -1 ) continue ;
        cout << states[i] << " -> " ;
        for (int j = 0; j < alphabet; j++)
        {
            cout << states[dfa[i][j]] << " " ;
        }
        cout << endl ;
    }

}



/*

8
A
B
C
D
E
F
G
H
2
0 1
B
A
A
C
D
B
D
A
D
F
G
E
F
G
G
D
A
D


*/ 