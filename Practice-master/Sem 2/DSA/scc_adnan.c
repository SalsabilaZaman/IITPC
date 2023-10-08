#include<stdio.h>
#include<string.h>
#define maxVer 100
// int stack[maxVer];
// int top=-1;


 char color[maxVer][10],prev[maxVer];
    int d[maxVer],f[maxVer],time,result[maxVer],transpose[][maxVer],fSorted[maxVer],topological[maxVer];
    int f2[maxVer];
    
   
int vertice;

void insertion_sort(int list[],int N)
{
    int temp[100];
    for(int i=2;i<N;i++)
    {  int temp=list[i];
       int j=i-1;
       while(j>=1 && list[j]>temp)
       {
        list[j+1]=list[j];
        j--;
       }
       list[j+1]=temp;
    
    
    }
}
// void push(int x){
//     if(top<maxVer-1)
//     {
//         top++;
//         stack[top]=x;
//         printf("\nsuccessfully added item %d",x);
//     }
//     else{
//         printf("\nexception! no spaces");
//     }
// }

// int pop()
// {
//    if(top>=0){
//     int val=stack[top];
//     top--; //this will delete the topmost item
//     return val;
//    }
//    printf("\nexception from pop! empty stack");
//    return -1;
// }

void print(int adj[][maxVer],int vertice){
    printf("\ngraph represented in adjacency matrix:\n");
    for(int i=0;i<vertice;i++){
        for(int j=0;j<vertice;j++){
            printf("  %d  ",adj[i][j]);
        }
        printf("\n");
    }
}

void  DFS_visit(int adj[][maxVer],int u){
         // printf("done traverse");
           strcpy(color[u],"grey");
         time=time+1;
          d[u]=time;
         printf(" %d ",u);
         result[u]=u;
         
             for(int i=0;i<vertice;i++){
        
           if (adj[u][i] == 1 && (strcmp(color[i], "white") == 0))
{
                //the node which has not been traversed yet
                strcpy(color[i],"grey");
                prev[i]=u; 
                DFS_visit(adj,i);  
    }
          }
             strcpy(color[u],"black");
             time=time+1;
             f[u]=time;
             //push(u);
             topological[time]=u;
            // printf("done!");

             
          }
         
  void DFS(int adj[][maxVer],int vertice){  
   //prev[]= prev root vertex , d[]= discoverd vertex , s=root vertex,f[]=finished vertex
   
    for(int i=0;i<vertice;i++){
                strcpy(color[i],"white");
                prev[i]=-1;
                d[i]=__INT_MAX__;  //set an infinte val in d[]
                f[i]=__INT_MAX__;
            
    } 
    time=0;
    for(int i=0;i<vertice;i++){
    if( (strcmp(color[i],"white"))==0)
    {
        DFS_visit(adj,i);
        //DFS(transpose,vertice);
    }
    }

}       
 void SSC(int adj[][maxVer],int vertice){  
   //prev[]= prev root vertex , d[]= discoverd vertex , s=root vertex,f[]=finished vertex
   
    for(int i=0;i<vertice;i++){
                strcpy(color[i],"white");
                prev[i]=-1;
                d[i]=__INT_MAX__;  //set an infinte val in d[]
                f[i]=__INT_MAX__;
            
    } 
    time=0;
    int j=0;
    for(int i=vertice-1;i>=0;i--){
        int k=f2[i];
    if( (strcmp(color[k],"white"))==0 )
    {
        j++;
        printf("Component %d :",j);
        DFS_visit(transpose,k);
        //DFS(transpose,vertice);
    }
    }

}       
void Transpose(int adj[][maxVer],int transpose[][maxVer],int vertice){
    int i, j;
    for (i = 0; i < vertice; i++){
        for (j = 0; j < vertice; j++){
            transpose[i][j] = adj[j][i];
        }
    }
    printf("\ntranspose matrix\n");
    for(int i=0;i<vertice;i++){
        for(int j=0;j<vertice;j++){
            printf("  %d  ",transpose[i][j]);
        }
        printf("\n");
    }
}


int main(){
    for(int i=0;i<maxVer;i++){
        topological[i]=-1;
    }
    int source,dest;
    printf("num of vertices: ");
    scanf("%d",&vertice);
    int adj[maxVer][maxVer];
    for(int i=0;i<vertice;i++){
        for(int j=0;j<vertice;j++){
            adj[i][j]=0;
        }
    }
    while(1){
        printf("enter edge from node (0 to %d) to (0 to %d): ",vertice,vertice);
        scanf("%d %d",&source,&dest);
         if (source == -1 || dest == -1)
            break;

          if (source < 0 || source >= vertice || dest < 0 || dest >= vertice) {
            printf("Invalid input\n");
            continue;
        }   
        adj[source][dest]=1;
        //adj[dest][source]=1;
    }
    Transpose(adj,transpose,vertice);
    print(adj,vertice);
     printf("DFS traversal result:\n");
    DFS(adj,vertice);
    printf("\nvertex backtracking time:");
     for(int i=0;i<vertice;i++){
                printf("%d ",f[i]);
              }
     printf("\nvertex forward tracking time:");
     for(int i=0;i<vertice;i++){
                printf("%d ",d[i]);
              }


     printf("\n");

printf("aaa---\n\n");
print(transpose,vertice);
     int k=0;
     printf("Topological sort:");
     for(int i=0;i<maxVer;i++){
         if(topological[i]!=-1)
         {
            printf(" %d ",topological[i]);
            f2[k]=topological[i];
            k++;
            }

     } 

printf("bb---\n\n");
print(transpose,vertice);
     //insertion_sort(f2,vertice); 
    // for(int i=0 ; i<vertice;i++){
    //     printf("\n");
    //     printf(" %d ",f2[i]);
    //  }
     SSC(transpose,vertice);           
    return 0;
    //02,10,13,21,23,24,35,45,46,57,64,67

}