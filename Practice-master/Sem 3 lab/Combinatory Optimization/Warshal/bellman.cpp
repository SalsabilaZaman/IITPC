#include<bits/stdc++.h>
using namespace std;

#define size 100

int graph[size][size] , vertexNo = 0 ;
string name[size] ;
bool visit[size] , flag ;

void initialize( int *distance, int *Prevs, int source )
{
	for( int i=0; i<vertexNo; i++ )
    {
		distance[i] = INT_MAX ;
		Prevs[i] = -1 ;
		visit[i] = false ;	
	}
	distance[source] = 0 ;
}

int extract_min( int *distance )
{
	int min = INT_MAX, in ;
	for( int i=0 ; i<vertexNo; i++ )
    {
		if( min>=distance[i] && visit[i] == false )
        {
            min = distance[i] ;
            in = i ; 	
        }	
	}
	return in ;
}

void relax1(int *distance,int *Prevs,int u , int v)
{
	if( distance[v] > distance[u]+graph[u][v] )
    {
		distance[v] = distance[u] + graph[u][v] ;
		Prevs[v] = u ;
       // flag=true;
	}
}

void relax2( int *distance, int *Prevs, int u , int v )
{
	if( distance[v] > distance[u] + graph[u][v] )
    {
		distance[v] = distance[u] + graph[u][v] ;
		Prevs[v] = u ;
        flag = true ;
	}
}

bool  bellman( int *distance, int *Prevs, int source )
{
	initialize( distance, Prevs, source ) ;
	int n = vertexNo, u, v ;
	while( n>0 )
    {
        u = extract_min(distance) ;
        visit[u] = true ;
        for( int v=0; v<vertexNo; v++ )
        {
            if( graph[u][v] )
            {
                relax1( distance, Prevs, u, v );		
            }	
        }
        n-- ;
	}

    n = vertexNo;
    flag = false ;
    for( int i=0; i<vertexNo ; i++ ) visit[i] = false ;
    while( n>0 )
    {
        u = extract_min(distance) ;
        visit[u] = true ;

        for( int v=0; v<vertexNo; v++ )
        {
            if( graph[u][v] ) 
            {
                
                relax2( distance, Prevs, u, v ) ;	
                if( flag == true ) break ;
            }	
        }
        n-- ;
	}
    return flag ;
}

void readInput()
{
    int u, v ;
    string s ;
    while ( cin >> s )
    {
        if( s == "END" )
            break ;

        for( u = 0; u < vertexNo; u++ )
        {
            if(name[u] == s)
                break;
        }
        if (u == vertexNo)
        {
            name[vertexNo] = s ;
            vertexNo++ ;
        }

        cin >> s;
        for(v = 0; v < vertexNo; v++)
        {
            if(name[v] == s)
                break;
        }
        if (v == vertexNo)
        {
            name[vertexNo] = s ;
            vertexNo++ ;
        }

        cin >> graph[u][v] ;

    }
}

void printPath(int *Prevs,int node)
{
    if( Prevs[node] == -1 )
    {
        cout << name[node] << "  " ;
        return ;
    }
    printPath( Prevs, Prevs[node] ) ;
    cout<<name[node] << "  " ;
}

int main()
{
	int distance[size], Prevs[size], source ;
    freopen( "bellmann.txt", "r", stdin ) ;
    readInput() ;
    cin >> source ;
    bool res = bellman( distance, Prevs, source ) ;
    if( res == true ) cout << "Negative cycle exist.\n" ;
    else cout << "No negative cycle.\n" ;

    for( int i=0; i < vertexNo; i ++ )
    {
        cout << name[i] << " -> " << distance[i] << endl ;
    }
}