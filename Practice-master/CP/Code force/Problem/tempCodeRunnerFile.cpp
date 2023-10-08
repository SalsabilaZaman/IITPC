#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, x;
    cin >> k >> n >> w ;
    x = k*(w*(w+1)/2);
    if(x>n) cout << x-n << endl;
    else cout << "0" << endl ;
    return 0;
}