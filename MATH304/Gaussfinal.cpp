#include<iostream>
#define ROW 3
#define COLUMN 4

using namespace std;

double A[ROW][COLUMN]={{4,1,1,8},
		{2,5,2,3},
		{1,2,4,11}};

int main(){
	double mat_L[ROW][ROW];
	
	for(int i=0;i<ROW;i++)
	   for(int j=0;j<ROW;j++)
	   	mat_L[i][j]=0;
	   	
	   
	for(int i=0;i<ROW;i++)
	   mat_L[i][i]=1;
	   
	for(int i=0;i<ROW;i++){
		double pivot=A[i][i];
		for(int j=i+1;j<ROW;j++){
			if(A[j][i]!=0){
				double div=A[j][i]/pivot;
				
				for(int k=0;k<COLUMN;k++)
					A[j][k]+=(-div)*A[i][k];
				for(int k=0;k<ROW;k++)	
					mat_L[j][k]+=(-div)*mat_L[i][k];		
			}
		}	
	}
	 
	double deter=1;
	for(int i=0;i<ROW;i++)
	   deter*=A[i][i];
	cout << "Determinant is="<<deter<<endl;
	
	for(int i=0;i<ROW;i++){
		double d=A[i][i];
		if(d!=1){
		      for(int j=0;j<COLUMN;j++)
			 A[i][j]/=d;
		      for(int j=0;j<ROW;j++)
		        mat_L[i][j]/=d; 
		}
	}
	
	for(int i=ROW-1;i>=0;i--){
		double pivot=A[i][i];
		for(int j=i-1;j>=0;j--){
			if(A[j][i]!=0){
				double div=A[j][i]/pivot;
				
				for(int k=COLUMN-1;k>=0;k--)
					A[j][k]+=(-div)*A[i][k];
				for(int k=ROW-1;k>=0;k--)	
					mat_L[j][k]+=(-div)*mat_L[i][k];			
			}
		}		
	}
	   	

	cout <<"Matrix-A="<<endl;
	for(int i=0;i<ROW;i++){
	   for(int j=0;j<COLUMN;j++)
	      printf("%9.5lf ",A[i][j]);
	   cout <<endl;
	}
	
	cout <<"Inverse Matrix="<<endl;
	for(int i=0;i<ROW;i++){
	   for(int j=0;j<ROW;j++)
	      printf("%9.5lf ",mat_L[i][j]);
	   cout <<endl;
	}
}
