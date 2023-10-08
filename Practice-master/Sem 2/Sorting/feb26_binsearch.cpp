#include<bits/stdc++.h>
#include<time.h>
using namespace std;

int search(double arr[], int left, int right, int tar);

int main()
{
    double s_time, e_time, ex;
    
    int n, i, tar, s=0;

    cin >> n ;
    double arr[n];
    for(i=0; i<n; i++)
    {
        // cin >> arr[i];
        arr[i] = rand()%n ;
        cout << arr[i]  << endl;
    }
    cout << endl;
    sort(arr, arr+n);
    s_time = clock();
    // for(i=0; i<n; i++)
    // {
    //     // cin >> arr[i];
    //     cout << arr[i]  << endl;
    // }
    cout << "target: ";
    cin >> tar ;
    //tar = rand() ;
    
    s = search(arr, 0, n-1, tar);
    if(s) cout << "Target number at index : " << s << endl ;
    else cout << "Not found." << endl ;

    e_time = clock();
    ex = e_time - s_time ;
    cout << "time = " << ex << endl ;

}

int search(double arr[], int left, int right, int tar)
{
    //if(left>right) return 0;
    while(left <= right )
    {
        int mid = (left+right)/2;
        if(arr[mid]==tar) return mid+1;
        else if (tar < arr[mid])
        {
            right = mid-1;
            search(arr,left,right,tar);
        }
        else 
        {
            left = mid+1;
            search(arr,left,right,tar);
        }   
    }
    
    return 0;
}