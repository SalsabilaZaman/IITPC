#include<iostream>
#include<cstdlib>
#include<cmath>
#define EPS 10.0e-6
using namespace std;
#define max 3

double A[max][max+1]={{4,1,1,8},
	      {2,5,2,3},
	      {1,2,4,11}};
double oldX[]={0,0,0};
double newX[]={0,0,0};
double b[max];
double D[max][max];
bool diagonallyDominant(){
	double sum;
	int i,j;
	for(i=0;i<3;i++){
		sum=0;
		double diagonal=A[i][i];
		for(j=0;j<3;j++)
			if(j!=i)
			   sum+=A[i][j];
		if(sum>=diagonal){
			cout << "Not Diagonally Dominant"<<endl;
			return false;
		}
		else
		    D[i][i]=diagonal;
	}
	return true;

}

void jacobian(){
	int i,j;
	double sum;
	bool done=false;
    	int iterator=1;
    while(!done){
        for(i=0;i<3;i++)
		oldX[i]=newX[i];	
	for(i=0;i<3;i++){
		sum=0;
		for(j=0;j<3;j++)
			if(j!=i)
			   sum+=A[i][j]*oldX[j];
		newX[i]=(b[i]-sum)/A[i][i];	   
	}
	done=true;
	for(i=0;i<3;i++)
		if(fabs(newX[i]-oldX[i])>EPS){
			done=false;
			break;
		}	 
     	if(done){
     	   for(i=0;i<3;i++)
		cout << newX[i]<<endl;  
		cout <<iterator<< endl<<endl;
     	}else
     	  iterator++;
     }	
	
}

void gauss_Siedel(){
	int i,j;
	for(i=0;i<3;i++){
		oldX[i]=0;
		newX[i]=0;
	}
	double sum;
	bool done=false;
    	int iterator=1;
    while(!done){
        for(i=0;i<3;i++)
		oldX[i]=newX[i];	
	for(i=0;i<3;i++){
		sum=0;
		for(j=0;j<3;j++)
			if(j!=i)
			   sum+=A[i][j]*newX[j];
		newX[i]=(b[i]-sum)/A[i][i];	  
	}
	done=true;
	for(i=0;i<3;i++)
		if(fabs(newX[i]-oldX[i])>EPS){
			done=false;
			break;
		}	 
     	if(done){
     	   for(i=0;i<3;i++)
		cout << newX[i]<<endl;  
		cout <<iterator<< endl<<endl;
     	}else
     	  iterator++;
     }	

}
int main(){	
	int i,j;
	for(i=0;i<3;i++)
		b[i]=A[i][3];
	bool solvable=diagonallyDominant();
	if(solvable){
		jacobian();
		gauss_Siedel();
	}
	return 0;
}	      
