#include<bits/stdc++.h>
using namespace std ;

int numVertices, numEdges;
vector< char > vertices;
set< pair< int, pair< char, char > > > edges ;
set< pair< int, pair< char, char > > > A ;
vector< set< char > > sets ;

void getInput()
{
    freopen( "krus.txt", "r", stdin ) ;
    cin >> numVertices >> numEdges ;
    getchar();
    for( int i=0; i<numVertices; i++ )
    {
        char temp ;
        cin >> temp ;
        vertices.push_back(temp) ;
    }

    for(int i=0; i<numEdges; i++)
    {
        char u, v ;
        int weight ;
        cin >> u >> v;
        cin >> weight ;
        getchar( );
        pair< int, pair< char, char > > edge ;
        edge.first = weight ;
        edge.second.first = u ; 
        edge.second.second = v ;
        edges.insert( edge ) ;
    }
}

int findSet( char u )
{
    int count=0;
    for(auto i: sets)
    {
        auto a= i.find(u);
        if(a != i.end())
        {
            break;
        }
        count++;
    }
    return count;
}

void Union( char u, char v )
{
    set< char > temp ;
    int index_u = findSet( u ) ;
    int index_v = findSet( v ) ;
   
    for( auto a: sets[index_v] )
    {
        sets[index_u].insert(a) ;
    }

    sets.erase( sets.begin() + index_v ) ;
}

void MST()
{
    for( int i=0; i < numVertices; i++ )
    {
        set<char> temp ;
        temp.insert( vertices[i] ) ;
        sets.push_back( temp ) ;
    }

    for( auto i : edges )
    {
        char u, v ;
        u = i.second.first ;
        v = i.second.second ;
        if( findSet(u) != findSet(v) )
        {
            A.insert( i ) ;
            Union( u, v ) ;
        }
    }
}


int main()
{
    int total = 0 ;
    getInput() ;
    MST() ;

    for ( auto ed : edges )
    {
        cout << ed.second.first << " -> " << ed.second.second << " : " << ed.first << endl ;
    }

    cout << "\nThe new tree edges :\n\n" ;
    for ( auto ed : A )
    {
        total += ed.first ;
        cout << ed.second.first << " -> " << ed.second.second << " : " << ed.first << endl ;
    }

    cout << endl << "Total weight : " << total << endl ;

}