#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  in, count=0 ;
    cin >> in ;
    count = count + (in/5);
    in = in % 5;
    count = count + (in/4);
    in = in % 4;
    count = count + (in/3);
    in = in % 3;
    count = count + (in/2);
    in = in % 2;
    count = count + in ;
    
    cout << count << endl;

}