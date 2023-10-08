#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0, r, c, i, j, count=0 ;
    for(i=1; i<6; i++)
    {
        for ( j=1; j<6; j++)
        {
            cin >> n;
            if(n)
            {
                r = i ;
                c = j ;
                break;
            }
            if(n) break;
        }
    }

    count = abs(r-3)+abs(c-3);
    cout << count << endl ;
}