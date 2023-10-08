#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a=0, d=0;
    cin >> n ;
    char arr[n+1];
    cin >> arr;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]=='A') a++;
        else if (arr[i]=='D') d++;        
    }

    if(a>d) cout << "Anton" << endl;
    else if (d>a) cout << "Danik" << endl;
    else cout << "Friendship" << endl;
    
}