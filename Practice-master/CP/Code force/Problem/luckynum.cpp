#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i;
    int l=0;
    cin >> i ;
    while (i)
    {
        if( i%10==4 || i%10==7 )
        {
            i/=10;
            l++;
            continue;
        }
        i/=10;
    }
    if( l==4 || l==7 ) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}