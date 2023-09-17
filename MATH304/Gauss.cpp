#include<iostream>
#define ROW 3
#define COLUMN 4

using namespace std;

double A[ROW][COLUMN]={{4,1,1,8},
		{2,5,2,3},
		{1,2,4,11}};

int main(){
	cout <<"FIRST="<<endl;
	for(int i=0;i<ROW;i++){
	   for(int j=0;j<COLUMN;j++)
	      printf("%7.2lf ",A[i][j]);
	   cout <<endl;
	}
	
	double mat_L[ROW][COLUMN],mat_U[ROW][COLUMN];	//LU decomposition
	
	for(int i=0;i<ROW;i++)
	   for(int j=0;j<COLUMN;j++){
	   	mat_L[i][j]=0;
	   	mat_U[i][j]=A[i][j];
	   }
	   
	for(int i=0;i<ROW;i++)
	   mat_L[i][i]=1;
	   
	for(int i=0;i<ROW;i++){
		double pivot=mat_U[i][i];
		for(int j=i+1;j<ROW;j++){
			if(mat_U[j][i]!=0){
				double div=mat_U[j][i]/pivot;
				//mat_L[j][i]=div;
				//mat_U[j][i]=0;
				for(int k=0;k<COLUMN;k++){
					mat_U[j][k]+=(-div)*mat_U[i][k];
					mat_L[j][k]+=(-div)*mat_L[i][k];
				}	
			}
		}
		
	}
	   


	cout <<"SECOND="<<endl;
	for(int i=0;i<ROW;i++){
	   for(int j=0;j<COLUMN;j++)
	      printf("%7.2lf ",mat_U[i][j]);
	   cout <<endl;
	}
	double deter=1;
	for(int i=0;i<ROW;i++)
	   deter*=mat_U[i][i];
	cout << "Determinant is="<<deter<<endl;
	
	for(int i=0;i<ROW;i++){
		double d=mat_U[i][i];
		if(d!=1){
		      for(int j=0;j<COLUMN;j++){
			 mat_L[i][j]/=d;
			 mat_U[i][j]/=d;
		      }
		}
	}
	cout <<"THIRD="<<endl;
	for(int i=0;i<ROW;i++){
	   for(int j=0;j<COLUMN;j++)
	      printf("%7.2lf ",mat_U[i][j]);
	   cout <<endl;
	}
	cout <<"THIRD="<<endl;
	for(int i=0;i<ROW;i++){
	   for(int j=0;j<COLUMN;j++)
	      printf("%7.2lf ",mat_L[i][j]);
	   cout <<endl;
	}
	for(int i=ROW-1;i>=0;i--){
		double pivot=mat_U[i][i];
		for(int j=i-1;j>=0;j--){
			if(mat_U[j][i]!=0){
				double div=mat_U[j][i]/pivot;
				
				for(int k=COLUMN-1;k>=0;k--){
					mat_U[j][k]+=(-div)*mat_U[i][k];
					mat_L[j][k]+=(-div)*mat_L[i][k];
				}		
				//mat_U[j][i]=0;
			}
		}
		
	}
	   
	

	cout <<"FOURTH="<<endl;
	for(int i=0;i<ROW;i++){
	   for(int j=0;j<COLUMN;j++)
	      printf("%7.2lf ",mat_U[i][j]);
	   cout <<endl;
	}
	cout <<"FOURTH="<<endl;
	for(int i=0;i<ROW;i++){
	   for(int j=0;j<COLUMN;j++)
	      printf("%7.2lf ",mat_L[i][j]);
	   cout <<endl;
	}
}
