#include<iostream>
#define ROW 3
#define COLUMN 3

using namespace std;

double A[ROW][COLUMN]={{4,1,1},
		{2,5,2},
		{1,2,4}};
double mat_D[ROW][COLUMN],mat_Ad[ROW][COLUMN],mat_Di[ROW][COLUMN];
double matC[ROW][COLUMN];
void multiply(int r){
	float sum;
	
	 for(int i=0;i<r;i++)  
	   for(int j=0;j<r;j++){
	     sum=0;	   
	     for(int k=0;k<r;k++)
	     	   sum+=(mat_D[i][k]*mat_Di[k][j]);	
	     matC[i][j]=sum;	
	}

}
int main(){
	//double mat_D[ROW][COLUMN],mat_Ad[ROW][COLUMN],mat_Di[ROW][COLUMN];
	
	for(int i=0;i<ROW;i++)
	   for(int j=0;j<COLUMN;j++){
	   	mat_D[i][j]=0;
	   	mat_Ad[i][j]=0;
	   }	
	   	
	   
	
	for(int i=0;i<ROW;i++)
	 for(int j=0;j<COLUMN;j++){
		if(i==j)
		   mat_D[i][j]=A[i][j];   
		else
		   mat_Ad[i][j]=A[i][j];
	}
	
	for(int i=0;i<ROW;i++)
	 for(int j=0;j<COLUMN;j++){
	 	if(i!=j)
	 	   mat_Di[i][j]=mat_D[i][j];
		else
		   mat_Di[i][j]=(1.0)/mat_D[i][j];
	 } 
	   	

	cout <<"Matrix-A="<<endl;
	for(int i=0;i<ROW;i++){
	   for(int j=0;j<COLUMN;j++)
	      printf("%9.2lf ",A[i][j]);
	   cout <<endl;
	}
	
	cout <<"Diagonal Matrix="<<endl;
	for(int i=0;i<ROW;i++){
	   for(int j=0;j<ROW;j++)
	      printf("%9.2lf ",mat_D[i][j]);
	   cout <<endl;
	}
	cout <<"Ad Matrix="<<endl;
	for(int i=0;i<ROW;i++){
	   for(int j=0;j<ROW;j++)
	      printf("%9.2lf ",mat_Ad[i][j]);
	   cout <<endl;
	}
	multiply(ROW);
	cout <<"Matrix-A="<<endl;
	for(int i=0;i<ROW;i++){
	   for(int j=0;j<COLUMN;j++)
	      printf("%9.2lf ",matC[i][j]);
	   cout <<endl;
	}
}
