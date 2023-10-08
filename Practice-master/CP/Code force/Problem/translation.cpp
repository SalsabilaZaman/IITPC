#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b ;
    int c=0;
    for ( int i = 0, j = a.length() -1; i < a.length(); i++, j--)
    {
        if(a[i]!=b[j])
        {
            c=0;
            break;
        }
        else c=1;
    }

    if(c) cout << "YES" << endl ;
    else cout << "NO" << endl ;
    
}