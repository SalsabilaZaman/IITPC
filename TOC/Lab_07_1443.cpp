#include<iostream>
#include<cstring>
using namespace std;
int n,c;

int main(){
	int s,a;
	cout <<"ENTER YOUR DFA!\n";
	cout <<"Total number of states-";
	scanf("%d",&n);
	string arr[n];
	for(int i=0;i<n;i++){
		cout<< "Enter State"<<i+1<<"-";
		cin >>arr[i];
	}
	cout <<"Number of characters in your language-";
	cin >> c;
	int digits[c];	
	cout << "Enter characters-";
	for(int i=0;i<c;i++)
		cin >> digits[i];
	int transition[n][c];
	string input;
	cout << "Enter transition stages-\n";
	for(int i=0;i<n;i++){
		cout << "Present State-"<<arr[i]<<endl;
		for(int j=0;j<c;j++){
			cout << "Next state for input "<< digits[j]<<"-";
			cin >> input;
			for(int k=0;k<n;k++){
				if(arr[k]==input){
				  transition[i][j]=k;
				  break;
				}  
			}
		}
	}
	
	cout << "Enter starting state-";
	cin >> input;
	for(int k=0;k<n;k++)
	   if(arr[k]==input){
		  s=k;
		  break;
	    }
	
	cout << "Enter accepting state-";
	cin >> input;
	for(int k=0;k<n;k++)
	   if(arr[k]==input){
		  a=k;
		  break;
	    }
	bool accepting[n];
	
	for(int i=0;i<n;i++)
	   accepting[i]=false;
	accepting[a]=true;
	
	char table[n][n];
	
	for(int i=0;i<n;i++)
	   for(int j=0;j<n;j++)
	     table[i][j]='n';
	
	     
	     
	for(int i=0;i<n;i++){
		if(accepting[i]==true){
		  for(int j=0;j<n;j++){ 
		   table[i][j]='X';
		   table[j][i]='X';
		  }   
		}
		else{
		 for(int j=i+1;j<n;j++){
		   if(table[i][j]=='n'){
		    for(int l=0;l<c;l++){	
		    	if(transition[i][l]==a || transition[j][l]==a){
		    	   if(transition[i][l]==a && transition[j][l]==a){
		    		table[i][j]='E';
		    		table[j][i]='E';
		    		break;
		    	   }
		    	   else{
		    	   	table[i][j]='X';
		    		table[j][i]='X';
		    		break;
		  	   }
		  	}	   
		    }	
		   if(table[i][j]=='n'){
		      bool flag=true;
		      for(int l=0;l<c;l++){
		        for(int k=0;k<c;k++)
		      	     if(accepting[transition[transition[i][l]][k]]!=accepting[transition[transition[j][l]][k]]){
		      	 		table[i][j]='X';
		    			table[j][i]='X';
		    			flag=false;
		    			break;
		      	     }
		      	    if(flag==false)
		      	       break;
		      } 	         
		      if(flag==true){
			   table[i][j]='E';
		    	   table[j][i]='E';
		      }
		   }
		  }     
		 }
	       }   
	} 
	for(int i=0;i<n;i++)
	   table[i][i]='E';  
	cout <<"  ";
	for(int i=0;i<n;i++)
	  cout << arr[i] <<" ";
	cout <<endl;  
	   
	for(int i=0;i<n;i++){
	  cout << arr[i] << " ";
	   for(int j=0;j<=i;j++)
	     cout << table[i][j] << " ";
	   cout <<endl;
	}   
	bool equivalent[n];
	for(int i=0;i<n;i++)
	   equivalent[i]=false;
	  	   
	for(int i=0;i<n;i++)   
	   for(int j=0;j<i;j++)
	      if(table[i][j]=='E')
	         equivalent[i]=true;
	cout <<"	 ";         
	for(int i=0;i<c;i++)
		cout << digits[i]<<"    ";
	cout <<endl;
	
	for(int i=0;i<n;i++)   
	    if(!equivalent[i]){
	   	cout << "State-"<<arr[i] <<"  ";
	   	for(int j=0;j<c;j++){
	   	    if(equivalent[transition[i][j]]){
	   	       for(int k=0;k<n;i++)
	   	          if(table[transition[i][j]][k]=='E' && transition[i][j]!=k){
	   	    		cout << arr[k]<<"    ";
	   	    		break;
	   	    	  }
	   	    } 	  	
	   	    else
	   	    	 cout <<arr[transition[i][j]]<<"    ";      
	   	}
	   	cout << endl;
	    }	      
		      
}	
/* Output looks like this-
  A B C D E F G H 
A E 
B X E 
C X X E 
D X X X E 
E X X E X E 
F X E X X X E 
G E X X X X X E 
H X X X X X X X E 
	 0    1    
State-A  B    A    
State-B  A    C    
State-C  D    B    
State-D  D    A    
State-H  A    D */
