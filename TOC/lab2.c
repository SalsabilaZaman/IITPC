#include<stdio.h>
#include<string.h>
int n,c;
/*int dfa(int *arr[],int digits[], char *arr1[],int f,int l,char *input){
	int len=strlen(input);
	int flag=f;
	printf("%s",arr1[f]);
	for(int i=0;i<len;i++){
	    for(int j=0;j<c;j++)	
		if(input[i]==digits[j]){
		   {
		   	printf("%s |",arr1[arr[digits[j]][flag]]);
		   	   flag=arr[digits[j]][flag];
		   	   break;
		   }  
		 break;    
		}
	   
	}   
	    
	return flag;
}
*/
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
	char str[20];    
	printf("Enter you string-");    
	scanf("%s",str);
	
	//int ans=dfa(transition,digits,arr,s,a,str);
	int len=strlen(str);
	int flag=s;
	printf("%s |",arr[s]);
	for(int i=0;i<len;i++){
	    for(int j=0;j<c;j++)	
		if(str[i]-'0'==digits[j]){
		   {
		   	printf("%s |",arr[transition[flag][j]]);
		   	   flag=transition[flag][j];
		   	   break;
		   }  
		 break;    
		}
	   
	} 
	
	if(flag==a)
	  printf("String is accepted!\n");
	else
	 printf("NO!\n") ; 
	return 0;
}
