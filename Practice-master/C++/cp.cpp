#include<bits/stdc++.h>
using namespace std;
unsigned int t , flag;

string check( string arr , int i )
{
    if( arr[i] == '5' || arr[i] == '6' || arr[i] == '7' || arr[i] == '8' || arr[i] == '9' )
    {
        arr[i-1] = arr[i-1] + 1 ;
        arr[i] = '0';
        arr = check( arr , i-1 );
        flag = 1 ;
    }
    return arr ;
}

int main()
{
    
    unsigned long long int n , res ;
    string arr ;
    cin >> t ;
    while (t--)
    {
        cin >> arr ;
        flag = 0 ;
        if( arr[0] == '5' || arr[0] == '6' || arr[0] == '7' || arr[0] == '8' || arr[0] == '9' ) 
        {
            res = (int)pow(10,arr.length()) ;
            cout << res << endl ;
            continue;
        } 
        if( arr.length() > 1 )
        for (int j = 1; j < arr.length(); j++)
        {
            if( flag ) 
            {
                arr[j] = '0' ;
                continue;
            }
            int i = j ;
            //arr = check ( arr, i );
            while( ( arr[i] == '5' || arr[i] == '6' || arr[i] == '7' || arr[i] == '8' || arr[i] == '9' ) && i>0 )
            {
                arr[i-1] = arr[i-1] + 1 ;
                arr[i] = '0';
                //arr = check( arr , i-1 );
                flag = 1 ;
                i = i-1 ;
            }
            if( arr[0] == '5' || arr[0] == '6' || arr[0] == '7' || arr[0] == '8' || arr[0] == '9' ) 
            {
                res = (int)pow(10,arr.length()) ;
                cout << res << endl ;
                continue;
            } 
        }
    
        cout << arr << endl ;
        
    }

}