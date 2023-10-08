#include<bits/stdc++.h>
using namespace std ;

// #define maximum 100 
//int input[maximum], prev[maximum], l[maximum];

int main()
{
    int maximum, maxLength = 0, maxIndex = 0 ;
    cout << "Enter the total number : " ;
    cin >> maximum ;
    maximum ++ ;
    int input[maximum], prev[maximum], l[maximum];

    for ( int i = 1; i < maximum; i++ )
    {
        cin >> input[i] ;
    }
    
    l[0] = 0 ;
    prev[0] = -1 ;

    for ( int i = 1; i < maximum; i++ )
    {
        l[i] = 0 ;
        for( int j = 0 ; j < i-1; )
        {
            if ( input[j] < input[i] && l[j]+1 > l[i] )
            {
                l[i] = l[j]+1 ;
                prev[i] = j ;
            }
            
        }
        if( l[i] > maxLength )
        {
            maxLength = l[i] ;
            maxIndex = i ;
        } 
    }
    
    cout << maxLength << endl ;


}