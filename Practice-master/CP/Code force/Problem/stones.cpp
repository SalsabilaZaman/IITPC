#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, c=0;
    cin >> n ;
    char arr[n];
    cin >> arr;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]==arr[i-1]) c++;
        else break;
    }
    cout << c << endl;
    
}
