#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node
{
    int data;
    int top;
    int *adjacent;
}node;
int min(int a,int b)
{
    if(a>b)return b;
    return a;
}
void DFS(node *graph,int source,bool visited[],int discovery[],int low[],int *time,int parent,bool isAp[])
{
    int child = 0;
    visited[source] = true;
    discovery[source] = low[source] = ++(*time);
    for(int i=0; i<graph[source].top; ++i){
        if(!visited[graph[source].adjacent[i]])
        {
            child++;
            DFS(graph,graph[source].adjacent[i],visited,discovery,low,time,source,isAp);
            low[source] = min(low[source],low[graph[source].adjacent[i]]);
            if(parent != -1 && low[graph[source].adjacent[i]] >= discovery[source])
                isAp[source] = true;
        }
        else if(graph[source].adjacent[i]!=parent)
            low[source] = min(low[source],low[graph[source].adjacent[i]]);
    }
    if(parent==-1 && child > 1)isAp[source] = true;
}
void DetectPoint(node *graph,int vertex)
{
    int low[vertex];
    int discovery[vertex];
    bool visited[vertex];
    bool IsAp[vertex];
    int time = 0,parent = -1;
    for(int i=0; i<vertex; i++)
    {
        discovery[i] = 0;
        visited[i] = false;
        IsAp[i] = false;
        // low[i] = -1;
    }
    for(int i=0; i<vertex; ++i){
        if(!visited[i])DFS(graph,i,visited,discovery,low,&time,parent,IsAp);
    }
    printf("Articulation points are: ");
    for(int i=0; i<vertex; ++i)
    {
        if(IsAp[i])printf("%d ",i);
    }
    printf("\n");
}

int main()
{
    int vertex,edge;
    scanf("%d %d",&vertex,&edge);
    node *graph = malloc(sizeof(node) * (vertex+1));
    for(int i=0; i<vertex; i++){
        graph[i].top = 0;
        graph[i].adjacent = malloc(sizeof(int) * vertex);
    }
    for(int i=0; i<edge; i++)
    {
        int v1,v2;
        scanf("%d %d",&v1,&v2);
        graph[v1].adjacent[graph[v1].top++] = v2;
        graph[v2].adjacent[graph[v2].top++] = v1;
    }
    DetectPoint(graph,vertex);
    return 0;
}