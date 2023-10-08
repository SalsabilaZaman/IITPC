#include<bits/stdc++.h>
using namespace std;

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

// bool isFinal( int indx, int dfa[][])
// {

// }

int main()
{
    int alphabet, stateNo, check = 0 ;
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
    
    int dfa[stateNo][alphabet] ;
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

    
    cout << "Enter initial state :" ;
    cin >> intState ;
    cout << "Enter final state : " ;
    cin >> finalState ;

    int finalStateIndex = getIndex( finalState, states );
    cout << finalStateIndex << endl ;
    // for( int k=0; k < stateNo ; k++ )
    // {
    //     if( states[k] == finalState )
    //     {
    //         finalStateIndex = k ; 
    //         break ;
    //     }
    // }

    int minimization[stateNo][stateNo];

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
    cout << endl ;

    int check1, check2 ;

    for ( int i = 0; i < stateNo; i++ )
    {
        for ( int k, j = 0; j < i; j++ )
        {
            if( minimization[i][j] ){
            check1 = i ;
            check2 = j ;
            bool flag = true ;
            for( k = 0; k < stateNo; k++ )
            {
                if ( (dfa[check1][0] == finalStateIndex && dfa[check2][0] == finalStateIndex) || (dfa[check1][1] == finalStateIndex && dfa[check2][1] == finalStateIndex) )
                {
                    break ;
                }
                else if( (dfa[check1][0] != finalStateIndex && dfa[check2][0] != finalStateIndex) || (dfa[check1][1] != finalStateIndex && dfa[check2][1] != finalStateIndex) )
                {
                    if( dfa[check1][0] != finalStateIndex && dfa[check2][0] != finalStateIndex )
                    {
                        check1 = dfa[check1][0] ;
                        check2 = dfa[check2][0] ;
                    }
                    else
                    {
                        check1 = dfa[check1][1] ;
                        check2 = dfa[check2][1] ;
                    }
                }
                else
                {
                    flag = false ;
                    break ;
                }
            }
            if( flag == true && k != stateNo ) minimization[i][j] = 1 ;
            else minimization[i][j] = 0 ;
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