#include<bits/stdc++.h>
#include<time.h>

using namespace std;

int main()
{
    double s_time, e_time, ex;
    
    int n, i, tar, s=0;

    cin >> n ;
    int arr[n];
    for(i=0; i<n; i++)
    {
        arr[i]=rand()%n;
        cout << arr[i] << endl;
    }
    sort(arr,arr+n);
    s_time = clock();
    cout << "target: ";
    cin >> tar ;
    
    for ( i = 0; i < n; i++)
    {
        if(tar == arr[i])
        {
            s = i;
            break;
        }
    }
    
    if(s) cout << "Target number at index : " << s+1 << endl ;
    else cout << "Not found." << endl ;

    e_time = clock();
    ex = e_time - s_time ;
    cout << "time = " << ex << endl ;

}