#include<iostream>
#include<cstdlib>

#define MAX 3
using namespace std;


int main(){
	int i,j,k;
	int A[MAX][MAX],B[MAX][MAX],AintoB[MAX][MAX];
	
	for(int i=0;i<MAX;i++)
	   for(int j=0;j<MAX;j++){
		A[i][j]=rand()%5;
		B[i][j]=rand()%6;
	   	AintoB[i][j]=0;
	   }
	
	for(int k=0;k<MAX;k++)
	 for(int j=0;j<MAX;j++)	   
	   for(int i=0;i<MAX;i++)  
	       AintoB[i][j]+=(A[i][k]*B[k][j]);

	cout << "Matrix-1:" << endl;
	for(int i=0;i<MAX;i++){
	   for(int j=0;j<MAX;j++)
	      cout << A[i][j] << " ";
	    cout << endl;
	}  
	    
	cout << "Matrix-2:" << endl;
	for(int i=0;i<MAX;i++){
	   for(int j=0;j<MAX;j++)
	      cout << B[i][j] << " ";
	    cout << endl;
	}
	
	cout << "Multiplication of 1 and 2:" << endl;
	for(int i=0;i<MAX;i++){
	   for(int j=0;j<MAX;j++)
	      cout << AintoB[i][j] << " ";
	    cout << endl;
	}
}      
