#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int t, a, b, c, i=1;
    cin >> t ;
    while (t--)
    {
        cin >> a >> b >> c ;
        if((a+b+c)%3==0) cout << "Case "<< i << ": Peaceful" << endl ;
        else cout << "Fight" << endl ;
        i++;
    }
    return 0;
}