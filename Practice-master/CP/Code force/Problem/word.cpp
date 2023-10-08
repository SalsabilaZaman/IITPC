#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[101];
    cin >> arr ;
    int i, up=0, low=0;
    for ( i = 0; arr[i]!='\0' ; i++)
    {
        if(arr[i]<92) up++;
        else low ++;
    }
    if(up>low)
    {
        for(i=0; arr[i]!='\0'; i++)
        {
            arr[i]=toupper(arr[i]);
        }
    }
    else 
    {
        for(i=0; arr[i]!='\0'; i++)
        {
            arr[i]=tolower(arr[i]);
        }
    }
    cout << arr << endl;
}