#include<bits/stdc++.h>
using namespace std;


#define Size 100

vector <string> name;
int VertexNo, d[Size][Size], p[Size][Size], graph[Size][Size] ;

void printPath( int s , int t ) ;
void warshall() ;
void read() ;
int indexnum( string str ) ;

int main()
{
    int ini, fi ;
    read() ;
    warshall() ;
    for( int i=0; i<VertexNo; i++ )
    {
        for( int j=0 ; j<VertexNo ; j++ )
        {
            cout << d[i][j] << "\t" ;
        }
        cout << endl ;
    }

    cout << endl ;
    for ( int i = 0; i < VertexNo; i++ )
    {
        cout << i+1 << " . " << name[i] << endl ;
    }

    // cout << "Enter the source no :" ;
    // cin >> ini ;
   
    // cout << "Enter the destination no :" ;
    // cin >> fi ;

    // printPath( ini-1, fi-1 ) ;
    // cout << name[fi-1] ;

    printPath(0,3);
    cout << name[3] ;
}


void read( )
{
    int edge , i, j, dist ;

    for( i=0; i<Size; i++ )
    {
        for( j=0; j<Size; j++ )
        {
            if( i == j ) graph[i][j] = 0;
            else 
            {
                graph[i][j] = INT_MAX;
            }
        }
    }

    freopen( "Floyd.txt", "r", stdin ) ;
    cin >> edge ;

    string x, y ;
    for( i=0; i<edge ; i++ )
    {
        cin >> x >> y >> dist ;
        if( find(name.begin(), name.end(), x) == name.end() )  name.push_back(x) ;
        if( find(name.begin(), name.end(), y) == name.end() )  name.push_back(y) ;

        int m, n ;
        m = indexnum(x) ;
        n = indexnum(y) ;
        graph[m][n] = dist ;
    }

    fclose(stdin) ;

    VertexNo = name.size() ;
}

int indexnum( string str )
{
    for( int i = 0; i < Size; i++ )
    {
        if( name[i] == str ) return i ;
    }
    return -1 ;
}

void warshall()
{
    int i, j, k ;
    for( i=0 ; i<VertexNo; i++ )
    {
        for( j=0 ; j<VertexNo ; j++ )
        {
            d[i][j] = graph[i][j] ;
            if( i == j || graph[i][j] == INT_MAX )
            {
                p[i][j] = -1 ;
            }
            else if( i != j && graph[i][j] < INT_MAX ) 
            {
                p[i][j] = i ;
            }
        }
    }

    for ( k=0; k<VertexNo; k++ ) 
    {       
        for ( i=0; i<VertexNo; i++ ) 
        {
            for ( j=0; j<VertexNo; j++ ) 
            {
                if (  d[i][j] > ( d[i][k]+d[k][j] )  &&  ( d[k][j] != INT_MAX  &&  d[i][k] != INT_MAX ) )
                { 
                    d[i][j] = d[i][k] + d[k][j] ;
                    p[i][j] = p[k][j] ;
                }
            }
        }
    }
}

void printPath( int s , int t )
{
    if( p[s][t] == -1 ) cout << "No path" << endl ;
    else if( p[s][t] == s ) cout << name[s] << " -> " ;
    else
    {
        printPath( s, p[s][t] ) ;
        printPath( p[s][t], t ) ;
    }
}