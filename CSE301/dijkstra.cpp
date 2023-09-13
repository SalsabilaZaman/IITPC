#include<iostream>
#include<climits>
#define N 10
using namespace std;
string names[N];
int numofEdges;
int minDis[N]={INT_MAX};
int edges[N][N]={0};
int n;
int prevN[N];
bool visited[N];
int inputFile(){
	string s,d;
	int w;
	freopen("anotherinput.txt","r",stdin);
	cin >> n;
	
	for(int i=0;i<n;i++){
	    cin >> names[i];
	    visited[i]=false;
	    minDis[i]=INT_MAX;
	    prevN[i]=0;
	}    
	
	cin >> numofEdges;
	for(int i=0;i<numofEdges;i++){
		int j,k;
		cin >> s >> d >> w;
		for(j=0;j<n;j++)
		   if(s==names[j])
			break;
		for(k=0;k<n;k++)
		   if(d==names[k])
			break;
		edges[j][k]=w;	
	}
	cin >> s;
	for(int i=0;i<n;i++)
		   if(s==names[i])
		     return i;    
	//fclose(fp);
	return 0;
}
int minimumN(int *arr){
	int min=INT_MAX;
	int minI=INT_MAX;
	for(int i=0;i<n;i++)
		if(visited[i]==false && arr[i]<min){
		    min=arr[i];
		    minI=i;
		}    
	return minI;
}

void relax(){
	for(int i=0;i<n;i++){
		int source=minimumN(minDis);
		for(int j=0;j<n;j++){
		   if(edges[source][j]!=0)
		     if(minDis[j]> minDis[source]+edges[source][j])
		         minDis[j]=minDis[source]+edges[source][j];
		         prevN[j]=source;
		}
		visited[source]=true;
	}
	
}
void printPath(int s,int source){
	if(prevN[s]!=source){
	   printPath(prevN[s],source);
	   cout << prevN[s];
	}   
	else   
	   cout << source;
}
int main(){
	int source=inputFile();
	minDis[source]=0;
	for(int i=0;i<n;i++){
	  for(int j=0;j<n;j++)
	     cout << edges[i][j] <<" ";
	  cout << endl;
	}
	
	relax();	      
	for(int i=0;i<n;i++){
	   cout << names[source]<< " "<<names[i] <<" "<<minDis[i] <<endl;
	 if(i!=0)  
	   printPath(i,source);
	}   
}
