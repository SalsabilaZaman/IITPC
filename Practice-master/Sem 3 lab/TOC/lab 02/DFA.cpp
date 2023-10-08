#include<bits/stdc++.h>
using namespace std;

int main()
{
    int alphabet, q, check = 0 ;
    char intState, finalState , temp ;
    cout << "Enter number of states : " ;
    cin >> q ;
    char states[q];
    cout << "Enter the states :\n" ;
    for ( int  i = 0; i < q; i++ )
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
    
    char dfa[q][alphabet] ;
    cout << "Enter the transitions :\n" ;
    for ( int i = 0; i < q ; i++ )
    {
        for (int j = 0; j < alphabet; j++)
        {
            cout << "From " << states[i] << " by " << alpha[j] << " : ";
            cin >> dfa[i][j] ;
        }
    }

    cout << "\nTrasitions: " << endl ;
    for ( int i = 0; i < q ; i++ )
    {
        for (int j = 0; j < alphabet; j++)
        {
            cout << "From " << states[i] << " by " << alpha[j] << " : " ;
            cout << dfa[i][j] << endl;
        }
    }
    cout << "Enter initial state :" ;
    cin >> intState ;
    cout << "Enter final state : " ;
    cin >> finalState ;
    
    string str ;
    cout << "Enter the String : ";
    cin >> str ; 

    temp = intState ;
    int sti;
    for ( sti = 0; str[sti]; sti++ )
    {
        int k, digit ,j;
        cout << temp << " " << str[sti] << " " ;

        for (j = 0; j < alphabet; j++)
        {
            if( str[sti]==alpha[j] ) break;
        }
        if( j == alphabet ) break ;

        for( k=0; k < q ; k++ )
        {
            if( states[k] == temp ) break ;
        }
        if( k == q ) break ;
        
        cout << dfa[k][j] << endl ;
        temp = dfa[k][j] ;

    }
   
    if( temp == finalState && sti < sizeof(str)/sizeof(char) )
    {
        cout<<"Accepted."<<endl;
    }
    else cout<<"Rejected"<<endl;
}



/*
   0  1
A  B  A
B  C  A
C  C  A


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
A
A
C

*/ 