#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
#define matMAX 100

double mat_A[matMAX][matMAX]={0};
double mat_L[matMAX][matMAX],mat_U[matMAX][matMAX];
double matC[matMAX][matMAX];

void multiply(int r){
	float sum;
	
	 for(int i=0;i<r;i++)  
	   for(int j=0;j<r;j++){
	     sum=0;	   
	     for(int k=0;k<r;k++)
	     	   sum+=(mat_L[i][k]*mat_U[k][j]);	
	     matC[i][j]=sum;	
	}

}	
int inputMatrix(){
	srand(time(0));
	int i,j,k;
	int row,column;
	again:
	cout <<"Enter matrix dimension(Row X Column):";
	cin >> row >> column;
	if(row!=column){
		cout << "Wrong input!It has to be square matrix!\nTry again!!"<<endl;
		goto again;
	}
	cout << "Enter your matrix-\n";
	for(int i=0;i<row;i++)
	   for(int j=0;j<row;j++)
	      mat_A[i][j]=(rand()%10)+1;
	
	cout << "Matrix-A="<< endl;
	for(int i=0;i<row;i++){
	   for(int j=0;j<row;j++)
	     cout << mat_A[i][j]<<" ";
	   cout << endl;
	}	      
	return row;
}	

int main(){
	int n=inputMatrix();
//LU decomposition
	for(int i=0;i<n;i++)
	   for(int j=0;j<n;j++){
	   	mat_L[i][j]=0;
	   	mat_U[i][j]=mat_A[i][j];
	   }
	for(int i=0;i<n;i++)
	   mat_L[i][i]=1;
	for(int i=0;i<n;i++){		//making lower triangle 0
		double pivot=mat_U[i][i];
		if(pivot ==0){
		    for(int j=i+1;j<n;j++)
			   if(mat_U[j][i]!=0){
			   	double swap=mat_U[j][i];
			   	mat_U[j][i]=mat_U[i][i];
			   	mat_U[i][i]=swap;
			   }	
		
		}
		pivot=mat_U[i][i];
		  for(int j=i+1;j<n;j++){
			if(mat_U[j][i]!=0){
				double div=mat_U[j][i]/pivot;
				mat_L[j][i]=div;
				//mat_U[j][i]=0;
				for(int k=0;k<n;k++)
				   mat_U[j][k]+=(-div)*mat_U[i][k];
				   	   
			}
		  }
	         
	}
	cout <<"MATRIX-L="<<endl;
	for(int i=0;i<n;i++){
	   for(int j=0;j<n;j++)
	     printf("%7.4lf ",mat_L[i][j]);
	   cout << endl;
	}
	cout << endl;
	cout <<"MATRIX-U="<<endl;
	for(int i=0;i<n;i++){
	   for(int j=0;j<n;j++)
	     printf("%7.4lf ",mat_U[i][j]);
	   cout << endl;
	}
	multiply(n);
	cout << endl;
	cout <<"MATRIX-L*MATRIX-U="<<endl;
	for(int i=0;i<n;i++){
	   for(int j=0;j<n;j++)
	     printf("%7.4lf ",matC[i][j]);
	   cout << endl;
	}
	
}
