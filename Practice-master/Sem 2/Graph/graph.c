#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int NumofAdjacent;
    int * adjacentVertices;
};
struct queue
{
    int data;
    struct queue *next;
};
struct queue *front = NULL;
struct queue *createQueue()
{
    struct queue *q =(struct queue*) malloc(sizeof(struct queue));
    q->next = NULL;
}

void enqueue(int data)
{
    struct queue *q = createQueue();
    q->data = data;
    if( front==NULL )
    {
        front = q;
        return;
    }
    struct queue *ptr = front;
    while( ptr->next != NULL ) ptr = ptr->next;
    ptr->next = q;
}

int dequeue()
{
    struct queue *ptr = front;
    int data = front->data;
    front=front->next;
    free(ptr);
    return data;
}

bool isEmpty()
{
    return front == NULL ;
}

void bfs(int source, struct node *Graph, int visited[], int level[], int vertex);

int main()
{
    int vertex, edge;
    printf("No of vertices and edges: ");
    scanf("%d %d", &vertex, &edge);
    int visited[vertex+1];
    int level[vertex+1];

    struct node *Graph;
    Graph = (malloc(sizeof(struct node) * (vertex+1)));
    for(int i=0; i<vertex+1; ++i)
    {
        Graph[i].NumofAdjacent = 0;
        Graph[i].adjacentVertices = malloc(sizeof(int) * vertex);
    }

    for(int  i = 1; i <= edge; i++)
    {
        int v1,v2;
        printf("Enter vertices of edge %d :", i);
        scanf("%d %d", &v1, &v2);
        Graph[v1].adjacentVertices[Graph[v1].NumofAdjacent++] = v2;
        Graph[v2].adjacentVertices[Graph[v2].NumofAdjacent++] = v1;
    }
    
    // for(int i=1; i<vertex+1; ++i)
    // {
    //     printf("Adjacent of node %d: ",i);
    //     for(int j=0; j<Graph[i].NoOfAdjVer; ++j)
    //     {
    //         printf("%d ",Graph[i].adjacentVertices[j]);
    //     }
    //     printf("\n");
    // }

    int bfs_root;
    printf("Enter BFS root : ");
    scanf("%d",&bfs_root);
    bfs( bfs_root, Graph, visited, level, vertex );
    for(int i=1; i<=vertex; i++)
    {
        printf("Level of %d = %d \n", i , level[i]);
    }
    return 0;
}

void bfs(int source, struct node *Graph, int visited[], int level[], int vertex )
{
    // int queue[vertex+10], queue_front = 0, queue_back = 0;
    for (int i = 0; i < vertex+1; i++)
    {
        visited[i] = 0 ;
        level[i] = -1 ;
    }
    
    // queue[queue_front] = source ;
    enqueue(source);
    level[source] = 0; 
    visited[source] = 1;

    while ( !isEmpty() )
    {
        int temp = dequeue();
        // printf("%d\n",Graph[temp].NumofAdjacent);
        for(int j=0; j<Graph[temp].NumofAdjacent; j++ )
        {
            if( visited[Graph[temp].adjacentVertices[j]] == 0 )
            {
                // printf("Enqueue: %d\n",Graph[temp].adjacentVertices[j]);
               enqueue(Graph[temp].adjacentVertices[j]);
               visited[Graph[temp].adjacentVertices[j]] = 1 ;
               level[Graph[temp].adjacentVertices[j]] = level[temp] + 1 ;

            }

        }
    }
}