#include<bits/stdc++.h>
using namespace std;

int main () 
{
    string st;
    cin >> st ;
    if(st[0]>96 && st[0]<123) st[0] = st[0]-32;
    cout << st;
    return 0;
}