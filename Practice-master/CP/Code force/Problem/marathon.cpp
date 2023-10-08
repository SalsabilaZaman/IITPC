#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, t, count=0 ;
    cin >> t ;
    while(t--)
    {
        count=0 ;
        cin >> a >> b >> c >> d ;
        if(a < b) count++;
        if(a < c) count++;
        if(a < d) count++;

        cout << count << endl ;
    }

}