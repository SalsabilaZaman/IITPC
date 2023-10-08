#include<bits/stdc++.h>
using namespace std;

int main()
{
    int alphabet, stateNo, check = 0 ;
    char intState, finalState , temp ;
    cout << "Enter number of states : " ;
    cin >> stateNo ;
    char states[stateNo];
    cout << "Enter the states :\n" ;
    for ( int  i = 0; i < stateNo; i++ )
    {
        cin >> states[i] ;
    }

    cout << "Enter number of elements in the alphabet : ";
    cin >> alphabet ;
    char alpha[alphabet] ;
    cout << "Enter the alphabet elements : " ;
    for ( int  i = 0; i < alphabet; i++ )
    {
        cin >> alpha[i] ;
    }
    
    char dfa[stateNo][alphabet] ;
    cout << "Enter the transitions :\n" ;
    for ( int i = 0; i < stateNo ; i++ )
    {
        for (int j = 0; j < alphabet; j++)
        {
            cout << "From " << states[i] << " by " << alpha[j] << " : ";
            cin >> dfa[i][j] ;
        }
    }

    // cout << "\nTrasitions: " << endl ;
    // for ( int i = 0; i < stateNo ; i++ )
    // {
    //     for (int j = 0; j < alphabet; j++)
    //     {
    //         cout << "From " << states[i] << " by " << alpha[j] << " : " ;
    //         cout << dfa[i][j] << endl;
    //     }
    // }

    string output = "" ;
    string RR[3][3] ;

    for ( int k = 0 ; k < 3 ; k++ )
    {
        cout << "For R(" << k << ") :" << endl ;
        for ( int i = 0; i < stateNo ; i++ )
        {
            for (int j = 0; j < stateNo; j++ )
            {
                output = "" ;
                if( k == 0 )
                {
                    for ( int m = 0 ; m < alphabet; m++ )
                    {
                        if( dfa[i][m] == states[j] ) output = output + alpha[m] + " " ;
                    }
                    if( i==j ) output = output + "E" + " " ;
                    if( output == "" ) output = "Null" ;
                    RR[i][j] = output ;
                    
                }
                else
                {
                    output = "(" + RR[i][j] + ")+(" + RR[i][k] + ")(" +RR[k][k] + ")(" +RR[k][j]+ ")" ;
                    RR[i][j] = output ;
                }
                
                cout << "R" << i << j << " - " << RR[i][j] << endl ;
            }
        }
        cout << endl ;

    }
    
}



/*
   0  1
A  B  A
B  C  A
C  C  B


3
A
B
C
2
0
1
B
A
C
A
C
B



*/ 