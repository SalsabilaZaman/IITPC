#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<climits>
#define N 10
using namespace std;
string names[N];
int edges[N][N]={0};
int n;
int numofEdges;
int minDis[N]={INT_MAX};
int inputFile(){
	string s,d;
	int w;
	freopen("input.txt","r",stdin);
	cin >> n;
	
	for(int i=0;i<n;i++)
	    cin >> names[i];
	
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

void traverse(){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n;j++)
		   for(int k=0;k<n;k++)
		      if(j!=k && edges[j][k]!=0)
		         if(minDis[j]+edges[j][k]<minDis[k])
		         	minDis[k]=minDis[j]+edges[j][k];
	
	}
}
void printdistance(int s){
	for(int i=0;i<n;i++)
	  cout << minDis[i] << " ";
}
int main(){
	int source=inputFile();
	minDis[source]=0;
	traverse();  
	printdistance(source);
	return 0;
}
