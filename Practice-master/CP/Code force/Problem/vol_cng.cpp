#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, d, x;
    cin >> t ;
    while(t--)
    {
        cin >> m >> n ; 
        x = 0;
        if(m>n) d = m - n;
        else d = n - m; 
        
        while(d>=5)
        {
            x = x + d/5;
            d = d % 5;
        }
        while(d>=2)
        {
            x = x + d/2;
            d = d % 2;
        }
        while(d>=1)
        {
            x = x + d;
            d--;
        }
        
        cout << x << endl; 
        
    }
    return 0;
}