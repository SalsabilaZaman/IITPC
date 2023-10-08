#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, max=0, i, s=0;
    cin >> n ;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(max<arr[i]) max=arr[i];
    }
    i=0;
    while (i<n)
    {
        s = s + (max-arr[i]);
        i++;
    }
    cout << s << endl;
    
}