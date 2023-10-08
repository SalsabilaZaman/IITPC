#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t, m, n, i=0, j=0;
    cin >> t ;
    while (t--)
    {
        cin >> m >> n ;
        if (m==n) continue;
        else if (m>n) i++;
        else j++;
    }
    if(i==j) cout << "Friendship is magic!^^" ;
    else if (i>j) cout << "Mishka" ;
    else cout << "Chris" ;
    
    return 0;
}