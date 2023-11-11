#include<iostream>
using namespace std;
#define MAX 50

int row;
int column=1;
double x[MAX];
double fx[MAX];

double matA[MAX][MAX];
double TmatA[MAX][MAX];
double mat1[MAX][MAX];
double mat2[MAX][MAX];
double mat3[MAX][MAX];

void readInput(){
	
	freopen("constantLSS.txt","r",stdin);
	cin >>row;
	for(int i=0;i<row;i++)
		cin >> x[i];
	for(int i=0;i<row;i++)
		cin >> fx[i];	
	for(int i=0;i<row;i++){
	    matA[i][0]=1;
 	    for(int j=1;j<column;j++){
 	       if(j==1) 
 	           matA[i][j]=fx[i];
 	       if(j==2)
 	          matA[i][j]=fx[i]*fx[i];
 	    }    
	}
	
	for(int i=0;i<row;i++)   
	    for(int j=0;j<column;j++)
	 		TmatA[j][i]=matA[i][j];
	    //cout <<endl;		   	
		 

}
void multiply1(){
	
	for(int i=0;i<row;i++)
	 for(int j=0;j<column;j++)
	   for(int k=0;k<row;k++)  
	       mat1[i][j]+=(TmatA[i][k]*matA[k][j]);
	   
	   
	for(int i=0;i<column;i++){    
	    for(int j=0;j<column;j++)
	 		cout << mat1[i][j]<<" ";
	    cout <<endl;		   	
	}

}

void multiply2(){
	for(int i=0;i<column;i++)
	 for(int j=0;j<row;j++)
	   for(int k=0;k<row;k++)  
	       mat2[i][j]+=(TmatA[i][k]*fx[k]);
	   
	   
	for(int i=0;i<column;i++){    
	    for(int j=0;j<column-1;j++)
	 		cout << mat2[i][j]<<" ";
	    cout <<endl;		   	
	}

}


int main(){
	readInput();
	multiply1();
	multiply2();
	
	cout<<mat2[0][0]/mat1[0][0];
	
}
