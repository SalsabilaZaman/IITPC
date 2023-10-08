#include<bits/stdc++.h>
using namespace std;

void createGraph(vector < vector<int> > & graph, int vertices, int edges)
{
    for(int i = 0 ; i < edges; i++)
    {
        int v1, v2;
        cout << "Edge " << i+1 << ": ";
        cin >> v1 >> v2 ;
        
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
         
    }
}

void BFS( int root, int level[], bool visited[], vector < vector <int> > & graph )
{
    queue<int> q ;
    q.push(root) ;
    level[root] = 0 ;
    visited[root] = true ;

    while (!q.empty())
    {
        int current_root = q.front();
        q.pop();
        for ( auto child : graph[current_root] )
        {
            if(!visited[child])
            {
                q.push(child);
                visited[child] = true ;
                level[child] = level[current_root] + 1 ;
            } 
        }
    }
}


int main()
{
    int vertices, edges;
    cout << "No of vertices and edges : " ;
    cin >> vertices >> edges ;
    
    vector < vector<int> > graph(vertices+1);
    int level[vertices+1];
    bool visited[vertices+1];
    
    for (int i = 0; i <= vertices; i++)
    {
        level[i] = 0;
        visited[i] = false;
    }
    

    createGraph( graph, vertices, edges );

    for(int i = 1; i <= vertices; i++)
    {
        cout << "Node" << i << " : ";
        cout << "Adjacent vertices: ";
        for(int j = 0; j < graph[i].size(); j++) cout << graph[i][j] << " ";
        cout << endl ;
    }

    int root ;
    cout << "From which root is to be calculated : " ;
    cin >> root ;
    BFS( root, level, visited, graph );
    for(int i=1; i<=vertices; i++)
    {
        cout << "Level of " << i << "=" << level[i] << endl;
    }
    
}