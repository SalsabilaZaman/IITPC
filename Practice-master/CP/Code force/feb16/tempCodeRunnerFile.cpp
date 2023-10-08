#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; 
    cin >> t;
    while(t--)
    {
        int m,n; 
        cin >> m >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int i,j, c1=0,c2=0;


        for(i=0; i< s1.size(); i++)
        {
            if(s1[i] == s1[i+1])
            {
                c1++;    
            }
        } 

        for(i=0; i< s2.size(); i++)
        {
            if(s2[i] == s2[i+1]) 
            {
                c2++;    
            }
        }

        if((c1 + c2) >1)
        {
            cout << "NO" << endl;
        }
        else if((c1 + c2) == 0){
            cout << "YES" << endl;
        }
        else
        {
            if(s1[m-1] == s2[n-1])
            {
                cout << "NO" << endl;
            }else cout << "YES" << endl;
        }

    }
    return 0;
}