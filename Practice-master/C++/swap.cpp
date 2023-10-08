#include<bits/stdc++.h>
using namespace std;

void mswap(int &a, int &b)
{
    int temp;
    temp = a ;
    a = b ;
    b = temp;
}

int main()
{
    int a, b;
    cin >> a >> b ;
    cout << "a=" << a << endl << "b=" << b << endl ;
    swap(a,b);                                         //  Built-in function..
    cout << "a=" << a << endl << "b=" << b << endl ;
    mswap(a,b);
    cout << "a=" << a << endl << "b=" << b << endl ;
}
