#include<iostream>
using namespace std;
#define MAX 50

int row;
int column=3;
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
 	           matA[i][j]=x[i];
 	       if(j==2)
 	          matA[i][j]=x[i]*x[i];
 	    }    
	}
	
	for(int i=0;i<row;i++)   
	    for(int j=0;j<column;j++)
	 		TmatA[j][i]=matA[i][j];
	    //cout <<endl;		   	
	/*for(int i=0;i<row;i++){    
	    for(int j=0;j<column;j++)
	 		cout << matA[i][j]<<" ";
	    cout <<endl;		   	
	}*/	 

}
void multiply1(){
	
	for(int i=0;i<column;i++)
	 for(int j=0;j<column;j++)
	   for(int k=0;k<row;k++)  
	       mat1[i][j]+=(TmatA[i][k]*matA[k][j]);
	   
	   
	/*for(int i=0;i<column;i++){    
	    for(int j=0;j<column;j++)
	 		cout << mat1[i][j]<<" ";
	    cout <<endl;		   	
	}
	*/
}

void multiply2(){
	for(int i=0;i<column;i++)
	 for(int j=0;j<row;j++)
	   for(int k=0;k<row;k++)  
	       mat2[i][j]+=(TmatA[i][k]*fx[k]);
	   
	   
	/*for(int i=0;i<column;i++){    
	    for(int j=0;j<column-1;j++)
	 		cout << mat2[i][j]<<" ";
	    cout <<endl;		   	
	}*/

}

void solve(){
	int ROW=column;
	int COLUMN=column+1;
	
	for(int i=0;i<ROW;i++)   
	    for(int j=0;j<COLUMN;j++){
	    	if(j<column)
	    		mat3[i][j]=mat1[i][j];
	    	else
	    		mat3[i][j]=mat2[i][j-column];
	    
	    }
	/*for(int i=0;i<column;i++){    
	    for(int j=0;j<column+1;j++)
	 		cout << mat3[i][j]<<" ";
	    cout <<endl;		   	
	}*/

	for(int i=0;i<ROW;i++){
		double pivot=mat3[i][i];
		if(pivot ==0){
		    for(int j=i+1;j<ROW;j++)
			   if( mat3[j][i]!=0){
			   	double swap=mat3[j][i];
			   	 mat3[j][i]=mat3[i][i];
			   	 mat3[i][i]=swap;
			   	break;
			   }	
		
		}
		pivot= mat3[i][i];
		for(int j=i+1;j<ROW;j++){
			if(mat3[j][i]!=0){
				double div=mat3[j][i]/pivot;
				
				for(int k=0;k<COLUMN;k++)
					mat3[j][k]+=(-div)*mat3[i][k];		
			}
		}	
	}
	 
	for(int i=0;i<ROW;i++){
		double d=mat3[i][i];
		if(d!=1)
		   for(int j=0;j<COLUMN;j++)
			 mat3[i][j]/=d;
		       
		
	}
	
	for(int i=ROW-1;i>=0;i--){
		double pivot=mat3[i][i];
		if(pivot ==0){
		    for(int j=i-1;j>=0;j--)
			   if(mat3[j][i]!=0){
			   	double swap=mat3[j][i];
			   	mat3[j][i]=mat3[i][i];
			   	mat3[i][i]=swap;
			   	break;
			   }	
		
		}
		pivot=mat3[i][i];
		for(int j=i-1;j>=0;j--){
			if(mat3[j][i]!=0){
				double div=mat3[j][i]/pivot;
				for(int k=COLUMN-1;k>=0;k--)
					mat3[j][k]+=(-div)*mat3[i][k];			
			}
		}		
	}
	for(int i=0;i<column;i++)
	 		cout << mat3[i][ROW]<<endl;
	   

}
int main(){
	readInput();
	multiply1();
	multiply2();
	cout <<"C="<<endl;
	if(column!=1)
	   solve();
	else{
		cout <<mat2[0][0]/mat1[0][0]<<endl;
	}
}
