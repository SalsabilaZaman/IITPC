#include<bits/stdc++.h>

using namespace std ;

#define SIZE 100
#define MAXIMUM_Value 1000000

int w[SIZE][SIZE], d[SIZE], previous[SIZE];
int n = 0;
bool flag[SIZE];
string name[SIZE];

priority_queue < pair<int, int>, vector<pair<int, int>>, greater <pair<int, int>> > pq ;

//void 

void initialize_single_source( int s )
{
    for ( int v = 0; v < n; v++ )
    {
        d[v] = MAXIMUM_Value ;
        previous[v] = -1 ;
    }
    d[s] = 0 ;
    pq.push( pair<int, int>(0,s));
}

void relax( int u, int v )
{
    if( d[v] > d[u] + w[u][v] )
    {
        d[v] = d[u] + w[u][v] ;
        previous[v] = u ;
        pq.push( pair<int, int>(d[v],v));
    }
}

// int extract_min( )
// {
//     int m = MAXIMUM_Value, index = -1 ;

//     for( int i = 0; i < n; i++ )
//     {
//         if( flag[i] && m > d[i] )
//         {
//             m = d[i] ;
//             index = i ;
//         }
//     }
//     return index ;
// }

void dijkstra( int s )
{
    initialize_single_source( s ) ;

    while(!pq.empty())
    {
        int u = pq.top().second;                 // pair<int,int> --> {0,0} -> 0->d[s] 0-> node
        pq.pop();

        for (int v = 0; v < n; v++)
        {
            if ( w[u][v] > 0 )
            {
                relax(u, v);
            }
        }
    }

}

void printPath( int i, int s )
{
    stack<string> st;
    int temp = i ;
    while ( 1 )
    {
        st.push(name[temp]);
        temp = previous[temp] ;    
        if( temp == s )
        {
            st.push(name[temp]);
            break ;
        } 
    }  
    while ( !st.empty() )
    {
        cout << st.top() <<" ";
        st.pop();
    }
    cout << endl ;
}

void printLD( int s )
{
    for ( int i = 0; i < n; i++ )
    {
        if( i!= n ) 
        {
            cout << name[s] << "->" << name[i] << " : " << d[i] << endl ;
            printPath( i , s ) ;
            //printPath( i );
            cout << endl ;
        }
    }
}

void readInput( )
{
    int u, v;
    string s;
    while ( cin >> s )
    {
        if(s == "END")
            break;

        for(u = 0; u < n; u++)
        {
            if(name[u] == s)
                break;
        }

        if (u == n)
        {
            name[n] = s;
            n++;
        }

        cin >> s;
        for( v = 0; v < n; v++ )
        {
            if(name[v] == s)
                break ;
        }
        if (v == n)
        {
            name[n] = s ;
            n++ ;
        }

        cin >> w[u][v] ;

    }
}

void printGraph()
{
    int u, v;
    for (u = 0; u < n; u++ )
    {
        for(v = 0; v < n; v++)
        {
            cout << w[u][v] << "\t";
        }
        cout << "\n";
    }
}


int main()
{
    freopen("input.txt","r",stdin) ;
    readInput( ) ;
    printGraph( ) ;
    printf("Shaikh") ;
    dijkstra( 0 ) ;
    cout << endl ;
    printLD( 0 ) ;
    return 0;
}


// for( int i = 0; i < n; i++ )
    // {                                  //Q <- V[G]
    //     flag[i] = true ;
    // }

    //int queueSize = n ;

    // while( queueSize-- )
    // {
    //     int u = extract_min( );

    //     for ( int v = 0; v < n; v++ )
    //     {
    //         if( w[u][v] > 0 )
    //         {
    //             relax(u, v) ;
    //         }
            
    //     }
    //     flag[u] = false ;
    // }