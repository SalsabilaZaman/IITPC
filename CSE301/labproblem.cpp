#include<bits/stdc++.h>
using namespace std;
#define MAX 100
string src;
string des;
vector<string> Vname;
int ResG[MAX][MAX];
int graph[MAX][MAX];
int vertex;
int edge;

int indexnum(string str){
    for(int i=0;i<vertex;i++)
        if(Vname[i]==str)
        	return i;
    
    return -1;
}

bool bfs(string source,string dest,int parent[]){
    int s,desti,u;
    queue<int> q;
    
    bool visited[vertex];
    for(int i=0;i<vertex;i++)
    	visited[i]=false;
    
    s=indexnum(source);
    visited[s] = true;
    
    desti=indexnum(dest);
    q.push(s);
    
    parent[s] = -1;
    while(!q.empty()) {
        u = q.front();
        q.pop();
        for (int v=0;v<vertex;v++) {
            if (visited[v]==false && ResG[u][v]>0) {
                if (v == desti) {
                    parent[v] = u;
                    return true;
                }
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }
    return false;
}
int Ford(){
    int i,j;
    int parent[vertex];
    int maxFlow=0;	    
    while(bfs(src,des,parent)){
        int flow= INT_MAX;
        int u,v,s;
        s=indexnum(src);
        v=indexnum(des);
        
        while(v!=s){			// to compute the minimum flow
            cout << Vname.at(v) <<" ";
            u = parent[v];
            flow = min(flow, ResG[u][v]);
            v=parent[v];
        }
        cout << src <<" ";
        v=indexnum(des);
         cout <<endl <<"FLOW ="<<flow <<endl;
        while(v!=s){
            u = parent[v];
            ResG[u][v] -= flow;
            v=parent[v];
        }
        maxFlow += flow;
    }
 
    return maxFlow;
}
void read(){
        int i,j,m,n;    
        freopen("ford.txt","r",stdin);
        cin>>vertex;
        cin>>src>>des>>edge;
        for(i=0;i<vertex;i++)
        	for(j=0;j<vertex;j++){
           		graph[i][j]=0;
            		ResG[i][j]=0;
        	}  
          for(i=0;i<edge;i++){
            string x,y;
            int cost;
            cin>>x>>y>>cost;
            if(find(Vname.begin(),Vname.end(),x)==Vname.end())
            	Vname.push_back(x);
            if(find(Vname.begin(),Vname.end(),y)==Vname.end())
            	Vname.push_back(y);
            m=indexnum(x);
            n=indexnum(y);
            graph[m][n]=cost;
            graph[n][m]=cost;
            ResG[m][n]=graph[m][n];
            ResG[n][m]=graph[n][m];
    	 }     
}

int main(){
		int maxi;
		read();
		maxi=Ford();
		cout<<"MAX FLOW IS : "<<maxi<<endl;
}
