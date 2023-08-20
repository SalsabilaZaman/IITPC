#include<iostream>
#define MAX 3
using namespace std;

int main(){
	int A[MAX][MAX]={2,4,-6,
			 1,5,3,
			 1,3,2};
	int c[MAX]={-4,10,5};
	
	int d=A[0][0]/A[1][0];
	
	for(int i=1;i<MAX;i++)		 
	   for(int j=0;j<MAX;j++)
	       A[i][j]=(-d*A[i][j])+A[0][j];
	       
	for(int i=0;i<MAX;i++){
		for(int j=0;j<MAX;j++)
			cout << A[i][j]<< " ";
	cout<< endl;
	}
	
	return 0;
}
