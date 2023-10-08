#include<bits/stdc++.h>
using namespace std ;

int main()
{
    string st;
    int i, j, l;
    cin >> st;
    l = st.length();
    for( i=0; i<st.length(); i++ )
    {
        for( j=i+1; j<st.length(); j++ )
        {
            if(st[i]==st[j]) 
            {
                st[j]= '0';
            }
        }
    }
    for( i=0; i<st.length(); i++ )
    {
        if(st[i]=='0') l--;
    }
    
    if(l%2==0) cout << "CHAT WITH HER!" ;
    else cout << "IGNORE HIM!" ;

    return 0;
}