#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int i, j, gd, n, t;
    cin >> t;
    while (t--)
    {
        cin >> n ;
        int arr[n], c=1;
        for ( i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for ( i = 0; i < n-1; i++)
        {
            for ( j = i+1; j < n; j++)
            {
                if(__gcd(arr[i],arr[j])>2) 
                {
                    c=0;
                    break;
                }
            }
            if(c==0) break;
        }
        
        gd =__gcd(arr[0],arr[1]);
        for(i=2; i<n; i++)
        {
            gd =__gcd(gd,arr[i]);
        }
        if(gd<=n && c) cout << "YES" << endl ;
        else cout << "NO" << endl ;
    }
    
}
