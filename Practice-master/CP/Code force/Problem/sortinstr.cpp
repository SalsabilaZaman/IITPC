#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, num[50];
    string ch;
    cin >> ch;    
    for( i=0,j=0; i< ch.length(); i+=2,j++)
    {
        // num[j] = atoi(ch[i]);
        // if (j>0) sort(num[j],num[j-1]);
        cout << ch[i] << endl ;
    }
    for ( i = 0; i < j ; i++)
    {
        cout << num[i] << endl ;
    }
    
    return 0;
}

 Unfinished...