#include<iostream>
#include<cstdio>
#include<fstream>
using namespace std;

int n,arr[50];

int max(int x,int y){
	if(x>y)
	  return x;
	else
	  return y;  
}

int readInput(){
	int maxRodLength;
	cin >> maxRodLength;
	
	for(int i=0;i<maxRodLength;i++)
		cin >> arr[i];
	return maxRodLength;
}

int rodcutting(int l,int revenue[]){
	int q;
	if(revenue[l]>=0)
	   return revenue[l];
	if(l==0)
	   q=0;
	else
	   q=-1;
	for(int i=1;i<=l;i++)
	 if(i<=n)
	    q=max(q,arr[i]+rodcutting(l-i,revenue));         
	
	revenue[l]=q;
	return q;
}

int main(){
	int l;	
	FILE *fp=freopen("rodprice.txt","r",stdin);
	n=readInput();
	cin >> l;
	int revenue[l+1];
	
	for(int i=0;i<l+1;i++)
	   revenue[i]=-1;
	   
	cout << "Maximum Revenue-" << rodcutting(l,revenue);
	
	
	return 0;
}
