#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X=0,t;
    cin>>t;
    string str;
    while(t--){
        cin>>str;
        if(str[1]=='+'){
            X++;
        }
        else if(str[1]=='-'){
            X--;
        }
    }
    cout<<X<<endl;

}