#include<iostream>
#include<cstring>
using namespace std;

int n,c;
int main(){
	int s,a,d=1;
	printf("ENTER YOUR DFA!\n");
	printf("Total number of states-");
	cin >>n;
	
	string arr[n];
	
	for(int i=0;i<n;i++){
		printf("Enter State%d-",i+1);
		cin >> arr[i];
	}
	cout << "Number of characters in your language-";
	cin >>c;
	int digits[c];	
	cout << "Enter characters-";
	for(int i=0;i<c;i++)
		cin >> digits[i];
		
	int transition[n][c];
	string input;
	cout << "Enter transition stages-\n";
	for(int i=0;i<n;i++){
		cout << "Present State-" << arr[i] << endl;
		for(int j=0;j<c;j++){
			printf("Next state for input %d-",digits[j]);
			cin >> input;
			for(int k=0;k<n;k++){
				if(arr[k]==input){
				  transition[i][j]=k;
				  break;
				}  
			}
		}
	}
	
	
	printf("Enter starting state-");
	cin >> input;
	for(int k=0;k<n;k++)
	   if(arr[k]==input){
		  s=k;
		  break;
	    }
	
	printf("Enter accepting state-");
	cin >> input;
	for(int k=0;k<n;k++)
	   if(arr[k]==input){
		  a=k;
		  break;
	    }
	
	string RE[n+1][n][n];
	
	for(int i=0;i<n;i++)		// for k=0
	   for(int j=0;j<n;j++){
	   	bool flag=true;
	   	for(int d=0;d<c;d++){
	   	    if(transition[i][d]==j && transition[i][d]==i){
	     	        RE[0][i][j]=to_string(digits[d])+"+"+"E";
	     	        flag=false;
	     	        break;
	     	    }    
	     	    else if (transition[i][d]==j){
	     	    	RE[0][i][j]=to_string(digits[d]);
			flag=false;
	     	        break;	     	       
	     	}
	       }
	       if(flag==true)
	          RE[0][i][j]="NULL";	        
	   }
	 for(int k=1;k<n;k++)
	    for(int i=0;i<n;i++)
	       for(int j=0;j<n;j++){
	          RE[k][i][j]="("+RE[k-1][i][j]+")"+"+"+"("+RE[k-1][i][k-1]+")"+"("+RE[k-1][k-1][k-1]+")"+"*"+"("+RE[k-1][k-1][j]+")";
	       
	       }
	 
	 for(int k=0;k<n;k++){
	   cout << "For k=" << k <<endl;   	
	  for(int i=0;i<n;i++){
	   for(int j=0;j<n;j++)
	      cout << "R"<<i+1<<j+1<<"="<<RE[k][i][j]<< "\t\t";
	   cout << endl;     
	  }
	  cout << endl;
	}   
	      
}	
