/*

IIT
Pharmacy
DoyelChattor
DMC
TSC
Nilkhet
JagannathHall
FullerRoad
SocialScienceBuilding
CurzonHall
FBS
11
IIT
Pharmacy
Pharmacy
DoyelChattor
DoyelChattor
CurzonHall
DoyelChattor
DMC
DMC
TSC
DoyelChattor
TSC
TSC
Nilkhet
TSC
JagannathHall
JagannathHall
FullerRoad
FullerRoad
SocialScienceBuilding
Nilkhet
FBS

*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int graph[20][20];
char place[20][20];
int vis[20];

int dis[20];
int queue[20];
int front=0, back=-1;
int count = 2;

void push(int x)
{
    back++;
    queue[back] = x;
}

int getFront()
{
    return queue[front];
}

void pop()
{
    front++;
}

int placeIndexing( char name[] )
{
    for(int i=0; i<20; i++)
    {
        if(!strcmp ( place[i] , name ))
            return i;
    }

    return -1;
}

void bfs(int src)
{
    dis[src] = 0;

    push(src);

    printf("%s", place[src]);
    while(front <= back)
    {
        int u = getFront();
        pop();

        if(vis[u]) continue;
            
        vis[u] = 1;

        for(int v=0; v<20; v++)
        {
            if(!vis[v] && graph[u][v])
            {
                printf(",%s", place[u]);
                dis[v] = dis[u] + 1;
                push(v);
                if(strcmp( place[u],"CurzonHall")) break;
        
            }
            
        }
    }
}


void goDestination( int isOk, int index )   // isOk 
{
    for (int i = index; i < count ; i++)
    {
        if ( i == isOk )
        {
            printf("%s, ", place[i]);
            return;
        }
        
        goDestination(  isOk, i );
    }
    
}

bool isConnected( from, to )
{
    if( graph[from][to] == 1 )
    {
        //isConnected[];
    }
}

int main()
{
    printf("Number of Places: ");
    scanf("%d", &count);
    getchar();

    for(int i=0; i<count; i++)
    {
        gets(place[i]);
    }

    printf("Number of paths : ");
    int path;
    scanf("%d", &path);
    getchar();

    for(int i=0; i<path; i++)
    {
        char from[20], to[20] ;
        printf(" From : ") ;
        gets(from) ;
        int f = placeIndexing(from) ;
        printf(" To : ") ;
        gets(to) ;
        int t = placeIndexing(to) ;

        graph[f][t] = graph[t][f] = 1 ;

    }

    char starting[20] ;
    printf(" Start from : ") ;
    gets( starting ) ;
    int h = placeIndexing( starting ) ;

    bfs(h);

    char targets[4][20] = { "CurzonHall" ,"Nilkhet", "FBS", "TSC" } ;    // CurzonHall Nilkhet FBS TSC
    int isOk[4] = { 0, 0 , 0, 0 };
    
    // for ( int j = 0 ; j < 4 ; j++ )
    // {
    //     for ( int i = 0; i < count; i++ )
    //     {
    //         if( strcmp( targets[j], place[i] && vis[i] ))  
    //         {
    //             isOk[j] = i ;
    //             break;
    //         }
    //     }
    // }

    // for (int i = 0; i < count; i++)
    // {
    //     if ( vis[i]==1 )
    //     {
    //         bfs(target[0]);
    //     }
        
    // }
    

    // for ( int j = 0 ; j < 4 ; j++ )
    // {
    //     if ( isOk[j] )
    //     {
            
    //     }
    // }



    return 0;
}

