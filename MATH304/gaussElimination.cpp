#include<iostream>
#define ROW 4
#define COLUMN 5
using namespace std;

int main(){
	int A[ROW][COLUMN]={1,-1,2,-1,-8,
			    2,-2,3,-3,-20,
			    1,1,1,0,-2,
			    1,-1,4,3,4};
	//int c[MAX]={-4,10,5};
	cout <<"BEFORE"<<endl;
	
	//cout << "AFTER"<<endl;
	for(int i=0;i<ROW;i++){
		for(int j=0;j<COLUMN;j++)
		     	printf("%3.1d",A[i][j]);
	   
	     cout << endl;
	
	}
	
	
	for(int i=1;i<ROW;i++){
	   int d=A[i][0]/A[0][0];		 
	   for(int j=0;j<COLUMN;j++)
	       A[i][j]=A[i][j]-(d*A[0][j]);
	}       
	
	cout << "AFTER"<<endl;
	
	for(int i=0;i<ROW;i++){
		for(int j=0;j<COLUMN;j++)
		     	printf("%3.1d",A[i][j]);
	   
	     cout << endl;
	
	}
	
	for(int i=1;i<ROW;i++)
	   for(int j=0;j<=i;j++){
	         if(A[i][j]==0 && i==j){
	           for(int k=i;k<ROW;k++)
	             if(A[k][j]!=0){
	           	for(int l=0;l<COLUMN;l++){
	           		int swap=A[k][l];
	           		A[k][l]=A[i][l];
	           		A[i][l]=swap;
	           	}
	           	     
	             } 
	         }
	         else if(A[i][j]!=0 && i!=j){
	         	int d=A[i][j]/A[i-1][j];
	         	for(int k=j;k<COLUMN;k++)
	         		A[i][k]=A[i][k]-(d*A[i-1][k]);
	         
	         }
	}         	      	
	      	
	
	/*if(A[i][j]!=0){
		for(int k=0;k<COLUMN;k++){   
		   int d=A[i][k]/A[0][k];
		   A[i][k]+=d;
		}*/	
	cout << "AFTER"<<endl;
	for(int i=0;i<ROW;i++){
		for(int j=0;j<COLUMN;j++)
		     	printf("%3.1d",A[i][j]);
	   
	     cout << endl;
	
	}
	
	return 0;
}
