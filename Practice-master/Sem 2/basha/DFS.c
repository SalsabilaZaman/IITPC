#include<stdio.h>

#define size 10
#define white 0
#define grey 1
#define black 2

int color[size]={white}, time=0, prev[size]={0}, dis[size]={-1}, final[size]={-1};
int matrix[size][size];

int stack[size];
int top = -1;

void sort(int list[]);

//void topology();

void dfs_visit( int index )
{
    color[index] = grey;
    time = time + 1;
    dis[index] = time ;
    for (int i = 0; i < size; i++)
    {
        if( color[i] == 0 && matrix[index][i]==1 )
        {
            prev[i] = index;
            dfs_visit(i);
        }
    }

    color[index] = black;
    stack[++top] = index;
    time = time + 1 ;
    final[index] = time ;
    printf("Node : %d  discovered-%d  final-%d .\n",index,dis[index],final[index]);
}


void dfs(int source)
{
    // for(int i=0; i<size; i++)
    // {
    //     color[i] = 0;
    //     prev[i] = 0;
    //     dis[i] = -1;
    //     final[i] = -1; 
    // }
    //time = 0 ;

    // for (int i = 0; i < size; i++)
    // {
    //     if( color[i] == 1 )
    //     {
    //         dfs(i) ;
    //     }
        
    // }
    dfs_visit(source);
    
}

void sort(int list[])
{
    int i, j, temp;
    for(i=0; i<size; i++)
    {
        for(j=1; j<size; j++)
        {
            if(list[j] > list[j-1])
            {
                temp= list[j];
                list[j]= list[j-1];
                list[j-1]= temp;
            }
        }
    }
}

int main()
{
    int vertex, edge;
    printf("No of vertices and edges: ");
    scanf("%d %d", &vertex, &edge);

    for(int  i = 1; i <= edge; i++)
    {
        int v1,v2;
        printf("Enter the directed vertices of edge %d :", i);
        scanf("%d %d", &v1, &v2);
        matrix[v1][v2] = 1;

    }

    int source;
    printf("Enter the Source : ");
    scanf("%d",&source);
    dfs(source);

    for (int i = top; i >= 0; i--)
    {
        printf("%d \n",stack[i]);      // topology..
    }
    
    //topology();

}



// void topology()
// {
//     int arr[size];
//     for(int i=0; final[i]; i++)
//     {
//         arr[i]= final[i];
//     }

//     sort(arr);

//     for(int i=0; arr[i]; i++)
//     {
//         for(int j=0; final[j]; j++)
//         {
//             if( arr[i] == final[j] && arr[i] != 0 )
//             {
//                 printf("%d\t", j);
//             }
//         }
        
//     }

// }