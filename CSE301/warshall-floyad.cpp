#include<iostream>
#include<climits>
using namespace std;
#define MAX 100
int n;
int graph[MAX][MAX];
int d[MAX][MAX];
int p[MAX][MAX];
int source,destination;
string names[MAX];

int read(){
	int edges,j,k,in=0;
	freopen("input.txt","r",stdin);
	cin >> edges;
	string sou,des;
	int distance;
	for(int i=0;i<edges;i++){
		cin >> sou >> des >> distance;
		for(j=0;j<in;j++){
		   if(sou==names[j])
			break;
		}
		for(k=0;k<in;k++){
		   if(des==names[k])
			break;
		}
		
		if(j==in && k==in){
			names[in]=sou;
			names[++in]=des;
			graph[in-1][in]=distance;
			in++;
		}
		else if(j==in){
			names[in]=sou;
			graph[in][k]=distance;  
			  in++;
		}
		else if(k==in){
			names[in]=des;
			graph[j][in]=distance;
			  in++;
		}
		else{
		   graph[j][k]=distance;
		}
	
	}
	cin >> sou >> des;
	for(int i=0;i<in;i++)
	   if(sou == names[i]){
	   	source=i;
	   	break;
	   }
	for(int i=0;i<in;i++)
	   if(des == names[i]){
	   	destination=i;
	   	break;
	   }    
	
	cout <<"GRAPH="<< endl;
	for(int i=0;i<in;i++)
	   for(j=0;j<in;j++)
	     if(graph[i][j]==0 && i!=j)
	         graph[i][j]=INT_MAX;
	for(int i=0;i<in;i++){
	    for(j=0;j<in;j++)
	    	cout << graph[i][j]<< " ";
	    cout << endl;
	  }
	return in;
}

void floyd_warshall(int n){
	  
	for(int i=0;i<n;i++)
	   for(int j=0;j<n;j++){
	      d[i][j]=graph[i][j];
	      p[i][j]=i;
	   }   
	for(int i=0;i<n;i++)
	    p[i][i]=-1;
	
	for(int k=0;k<n;k++){          
	  for(int i=0;i<n;i++)
	    for(int j=0;j<n;j++)    
		if(i!=j && d[i][k]!=INT_MAX && d[k][j]!=INT_MAX && d[i][k]+d[k][j]<d[i][j]){
		   d[i][j]=d[i][k]+d[k][j];
		   p[i][j]=p[k][j];
		}
	}
	cout << "D="<<endl;  	
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++)
	    	cout << d[i][j]<< " ";
	    cout << endl;
	  }
	  cout << endl;
	cout << "P="<<endl;  
	 for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++)
	    	cout << p[i][j]<< " ";
	    cout << endl;
	  }
		
}

void printPath(int s,int d){
	if(p[s][d]==-1)
	  cout << "NO PATH"<<endl;
	else if(p[s][d]==s)
	  cout << names[s] <<" ";
	else{
	   printPath(s,p[s][d]);
	   printPath(p[s][d],d);
	}
	    
}
int main(){
	n=read();
	floyd_warshall(n);
	printPath(source,destination);
	cout << names[destination] << endl;
}
