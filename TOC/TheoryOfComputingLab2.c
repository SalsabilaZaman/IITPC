#include<stdio.h>
#include<stdlib.h>

/*int stringchecker(char *arr){
	 int index=0,flag=0;
	 
	 while(arr[index]){
	   q1:{
	   	flag=0;
	   	if(arr[index]==0){
	   	  index++;
	   	  goto q2;
	   	}  
	   	else if(arr[index]==1){
	   	 index++;
	   	 continue;
	   	}   
	   }
	   q2:{
	   	flag=0;
	   	if(arr[index]==0){
	   	  index++;
	   	  goto q3;
	   	}  
	   	else if(arr[index]==1){
	   	 index++;
	   	 continue;
	   	}
	   }
	   q3:{
	   	flag=1;
	   	if(arr[index]==0){
	   	  index++;
	   	  goto q2;
	   	}  
	   	else if(arr[index]==1){
	   	 index++;
	   	 goto q1;
	   	}
	   }
	 }
	return flag; 

}
int stringchecker(char *arr){
	int i,n,flag=0;
	for(i=0;arr[i];i++){
		if(arr[i]!='1' && arr[i]!='0'){
		  printf("String is not from the alphabet!");
		  exit(1);
		  }
	}
	n=i;
	
	for(i=0;i<n;i++){
	   if(flag==0){	
	     if(arr[i]=='0'){
	   	printf("q1|");
	   	flag=1;
	     }	 
	     else
	       printf("q0|");
	     	
	   }
	   else if(flag==1){
	   	if(arr[i]=='0'){
	   	        printf("q2|");
	   		flag=2;
	   	}	
	   	else{
	   	  flag=0;
	   	  printf("q0|");
	   	} 	
	   }
	   else if(flag==2){
	   	if(arr[i]=='0'){
	   	 	printf("q2|");
	   		flag=2;
	   	}
	   	else{
	   	  printf("q0|");
	   	  flag=0;
	   	}  
	   	
	   }
	}
	return flag;
}
*/

int stringchecker(char *arr){
	int i,n,flag=0;
	for(i=0;arr[i];i++){
		if(arr[i]!='1' && arr[i]!='0'){
		  printf("String is not from the alphabet!");
		  exit(1);
		  }
	}
	n=i;
	printf("q0|");
	for(i=0;i<n;i++){
	   if(flag==0){ 	
	     if(arr[i]=='0'){
	   	flag=1;
	   	i++;
	     }
	     else
	      printf("q0|");
	
	   }
	   if(flag==1){
	   	printf("q1|");
	   	if(arr[i]=='0'){	   	      
	   		flag=2;	
	   		i++;
	   	}	
	   	else
	   	  flag=0;
	   }
	   if(flag==2){
	   	printf("q2|");
	   	if(i<n && arr[i]!='0')
	   		flag=0;
	   	  	   	
	   }
	}
	return flag;
}

int main(){
	int choice;
	
	printf("1.Test strings(if it ends with '00')\n");
	printf("2.Enter your condition to test strings\n");
	printf("Enter your choice-");
	scanf("%d",&choice);
	if(choice==1){
		printf("Enter your string-");
		char str[50];
		scanf("%s",str);
		int ans=stringchecker(str);
		if(ans==0)
		    printf("\nStuck on q0!");
		else if(ans==1) 
		   printf("\nStuck on q1!");
		else
		    printf("\nYES it ends with '00'");   	
	}
	else{
		char c;
		printf("a.String will end with-\n");
		printf("b.String will start with-\n");
		printf("c.String will consist of-\n");
		printf("d.String wont have-\n");
		printf("Enter your choice-");
		scanf("%c",&c);
		
		//switch(c):
		//	case 'a':
	}
	
}
