#include<bits/stdc++.h>
using namespace std ;
#define totalSize 50

string src, des ;
int vertex, edge, graph[totalSize][totalSize], resGraph[totalSize][totalSize] ;
vector< string > VertexName ;

int indexnum(string str)
{
    for( int i = 0; i < totalSize; i++ )
    {
        if( VertexName[i] == str ) return i ;
    }
    return -1 ;
}

bool bfs( string source, string dest, int parent[] )
{
    int s, desination, u ;
    queue< int > q ;
    bool visited[vertex] ;
    for( int i=0; i < vertex; i++ ) visited[i] = false ;
    s = indexnum(source) ;
    desination = indexnum(dest) ;
    q.push(s) ;
    visited[s] = true ;
    parent[s] = -1 ;
    while( !q.empty() ) 
    {
        u = q.front() ;
        q.pop() ;
        for ( int v=0; v<vertex; v++ ) 
        {
            if( visited[v] == false && resGraph[u][v] > 0 ) 
            {
                if (v == desination ) 
                {
                    parent[v] = u ;
                    return true ;
                }
                q.push(v) ;
                parent[v] = u ;
                visited[v] = true ;
            }
        }
    }
    return false ;
}


void read()
{
    int a, b, i, j ;
    for( i = 0; i < totalSize; i++ )
    {
        for( j = 0; j < totalSize; j++ )
        {
            graph[i][j] = 0 ;
            resGraph[i][j] = 0 ;
        }
    }
    freopen("fordFulkerson.txt","r", stdin ) ;
    cin >> edge ;
    for( i=0; i<edge; i++ )
    {
        string x, y ;
        int cost ;
        cin >> x >> y >> cost ;
        if( find( VertexName.begin(), VertexName.end(), x ) == VertexName.end() )  VertexName.push_back(x) ;
        if( find( VertexName.begin(), VertexName.end(), y ) == VertexName.end() )  VertexName.push_back(y) ;
        a = indexnum( x ) ;
        b = indexnum( y ) ;
        graph[a][b] = cost ;
        resGraph[a][b] = graph[a][b] ;
    }

    cin >> src >> des ;
    vertex = VertexName.size() ; 
}


int Ford()
{
    int i, j ;
    int parent[vertex] ;
    int maxFlow = 0 ;
    while( bfs( src, des, parent ) )
    {
        int flow = INT_MAX ;
        int u, v, s ;
        s = indexnum( src ) ;
        v = indexnum( des ) ;
        
        while( v != s ) 
        {
            u = parent[v] ;
            flow = min( flow, resGraph[u][v] ) ;
            v = parent[v] ;
        }
        
        v = indexnum(des) ;
        
        while( v != s )
        {
            u = parent[v] ;
            resGraph[u][v] -= flow ;
            v = parent[v] ;
        }
        maxFlow += flow ;
    }
 
    return maxFlow ;
}

int main()
{
    read() ;
    int maxflow = Ford() ; 
    cout << "Maximum flow : " << maxflow << endl ;
}