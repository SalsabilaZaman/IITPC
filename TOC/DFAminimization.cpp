#include<iostream>
#include<cstring>
using namespace std;
int n,c;



int main(){
	int s,a;
	printf("ENTER YOUR DFA!\n");
	printf("Total number of states-");
	scanf("%d",&n);
	char arr[n][5];
	for(int i=0;i<n;i++){
		printf("Enter State%d-",i+1);
		scanf("%s",arr[i]);
	}
	printf("Number of characters in your language-");
	scanf("%d",&c);
	int digits[c];	
	printf("Enter characters-");
	for(int i=0;i<c;i++)
		scanf("%d",&digits[i]);
	int transition[n][c];
	char input[5];
	printf("Enter transition stages-\n");
	for(int i=0;i<n;i++){
		printf("Present State-%s\n",arr[i]);
		for(int j=0;j<c;j++){
			printf("Next state for input %d-",digits[j]);
			scanf("%s",input);
			for(int k=0;k<n;k++){
				if(strcmp(arr[k],input)==0){
				  transition[i][j]=k;
				  break;
				}  
			}
		}
	}
	
	printf("Enter starting state-");
	scanf("%s",input);
	for(int k=0;k<n;k++)
	   if(strcmp(arr[k],input)==0){
		  s=k;
		  break;
	    }
	
	printf("Enter accepting state-");
	scanf("%s",input);
	for(int k=0;k<n;k++)
	   if(strcmp(arr[k],input)==0){
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
	   
	   
	      
}	
