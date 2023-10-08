#include<bits/stdc++.h>
using namespace std;

const int N=1e3+10;
vector <int> graph[10];
bool visited[10];
int level[10];

void BFS(int source){
    queue <int> q;
    q.push(source);
    visited[source] = true;
    level[source] = 0;
    while(!q.empty()){
        int cur_V = q.front();
        q.pop();
        for(auto child : graph[cur_V]){
            if(!visited[child]){
                q.push(child);
                visited[child] = true;
                level[child] = level[cur_V] + 1;
            }
        }
    }
}

int main(){
    int vertices,edge;
    cin >> vertices >> edge;
    for(int i=0; i<edge; ++i){
        int v1,v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    BFS(1);
    for(int i=1; i<7; i++){
        cout << "Level of " << i << "=" << level[i] << endl;
    }
}