#include<bits/stdc++.h>

#define mx 5
using namespace std;

priority_queue<int, vector<int> , greater<int>> pq;
priority_queue<pair<int, int>, vector<pair<int, int>> , greater<pair<int, int>>> pQueue;
int g[mx][mx]=
{
    0, 250, 0, 165, 0,
    0, 0 , 180,0, 0,
    0, 0, 0, 0, 0,
    0, 0, 0, 0, 140,
    0, 0, 0, 0, 0 
};

int main(int argC, char* argV[]){
    // vector<int> v = {1,5,6,8,4,2};
    
    // for(auto x : v){
    //     pq.push(x);
    // }

    // while(!pq.empty()){
    //     cout << pq.top() << " " ;
    //     pq.pop();
    // }
    for(int i = 0; i < mx; ++i){
        for(int j = 0; j < mx; ++j){
            // pair<int, int> tmp;
            // tmp = make_pair(g[i][j],i);
            //pQueue.push(tmp);
            pQueue.push(make_pair(g[i][j],i));
        }
    }

    while(!pQueue.empty()){
        cout << pQueue.top().first << " " << pQueue.top().second << endl;
        //cout << pQueue.top() << endl;
        pQueue.pop();
    }   
}