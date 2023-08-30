#include<stdio.h>

int main(){
	int n,c;
	
	printf("Enter your NFA!\n\n");
	printf("How many states-");
	scanf("%d",&n);
	char states[n];
	printf("Enter your states-\n");
	getchar();
	for(int i=0;i<n;i++){
		printf("State-%d:",i+1);
		scanf("%c",&states[i]);
		getchar();
	}
	printf("How many characters-");
	scanf("%d",&c);
	
	int transitiontable[n][c][n],characters[c];
	
	printf("Enter characters-\n");
	for(int i=0;i<c;i++){
		printf("Character-%d-",i+1);
		scanf("%d",&characters[i]);
	}
	
	printf("Enter your transition table-\n");
	for(int i=0;i<n;i++){
		printf("Current state-%c:\n",states[i]);
		for(int j=0;j<c;j++){
			printf("Input-%d:\n",characters[j]);
			printf("How many transition for %d-",characters[j]);
			int num;
			char input;
			scanf("%d",&num);
			for(int k=0;k<n;k++){
				if(k<num){
					printf("Transition-%d:",k+1);
					scanf("%c",&input);
					getchar();
					for(int l=0;l<n;l++)
					   if(input==states[l]){
					   	transitiontable[i][j][k]=l;
					   	break;
					   }	
				}
				else 
					transitiontable[i][j][k]=-1;
			}
		}
	}
	
	char input;
	int start,end;
	printf("Enter starting state-");	   
	scanf("%c",&input);
	for(int l=0;l<n;l++)
	   if(input==states[l]){
	  	start=l;
	  	break;
	  }
	getchar();
	printf("Enter accepting state-");	   
	scanf("%c",&input);
	for(int l=0;l<n;l++)
	   if(input==states[l]){
	  	end=l;
	  	break;
	  }
	getchar();
	
	int subsets[15][3];
	for(int j=0;j<15;j++)
	  for(int i=start;i<=end;){
		subsets[j][0]=i;
		int num=0;
		for(int k=0;k<c;k++)			//for input 0
		  if(transitiontable[i][0][k]!=-1)		
		    num=num*k+transitiontable[i][0][k];
		subsets[j][1]=num;
		num=0;
		for(int k=0;k<c;k++)			//for input 1
		  if(transitiontable[i][1][k]!=-1)		
		    num=num*k+transitiontable[i][1][k];
		subsets[j][2]=num;
		
	}
	
	printf("States of the DFA-");
	for(int j=0;j<15;j++){	
	   for(int k=0;k<3;k++)
	      printf("%c",states[subsets[j][k]]);
	   printf("\n");
	}   
}
