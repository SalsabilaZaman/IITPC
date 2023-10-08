// #include <bits/stdc++.h>
// #include <iostream>
// #include <math.h>
// using namespace std;
 
// // A utility function to get the maximum of two integers
// int max(int a, int b) 
// {
//      return (a > b) ? a : b ; 
// }
 
// /* Returns the best obtainable price for a rod of length n
//    and price[] as prices of different pieces */
// int cutRod(int price[], int index, int n)
// {
//     // base case
//     if (index == 0) {
//         return n * price[0];
//     }
//     //At any index we have 2 options either
//       //cut the rod of this length or not cut
//       //it
//     int notCut = cutRod(price,index - 1,n);
//     int cut = INT_MIN;
//     int rod_length = index + 1;
 
//     if (rod_length <= n)
//         cut = price[index] + cutRod(price,index,n - rod_length);
   
//     return max(notCut, cut);
// }
 
// /* Driver program to test above functions */
// int main()
// {
//     int arr[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << "Maximum Obtainable Value is " << cutRod(arr, size - 1, size);
//     getchar();
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int n,price[100],revenue[100],price_num,sol[100];

int rod_cut();
int rod_cut_aux(int n);

int main(){
    int i,j;
    price_num=10;
    freopen("input_rod.txt","r",stdin);
    scanf("%d",&n);
    for(i=1;i<=price_num;i++){
        scanf("%d",&price[i]);
    }
    printf("Max revenue: %d\n",rod_cut());
    return 0;
}

int rod_cut(){
    int i;
    for(i=0;i<n+1;i++){
        revenue[i]=-1;
    }
    return rod_cut_aux(n);
}

int rod_cut_aux(int n){
    if(revenue[n]>=0){
        return revenue[n];
    }
    int q;
    if(n==0){
        q=0;
    }
    else{
        q=-1;
        for(int i=1;i<=n;i++){
            q=max(q,price[i]+rod_cut_aux(n-i));
        }
    }
    revenue[n]=q;
    return revenue[n];
}