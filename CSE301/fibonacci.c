#include<stdio.h>

/*
int fibonacci(int n){
 	if(n>1)
 	  return fibonacci(n-1)+fibonacci(n-2);
	else
	   return n;
	
}
int main(){
	int x;
	printf("Input-");
	scanf("%d",&x);
	printf("%dth fibonacci number is-%d",x, fibonacci(x));
	return 0;
}

int fibonacci(int n,int *arr){  
	if(arr){
	  arr[n]=n;  
	  return arr[n];
	}
	if(arr[n]<0){
	  arr[n]=fibonacci(n-1,arr)+fibonacci(n-2,arr);
	  return arr[n];
	  
}

int main(){
	int x;
	printf("Input-");
	scanf("%d",&x);
	int list[x];
	for(int i=0;i<x;i++)
	  list[i]=-1;
	fibonacci(x,list);
	printf("%dth fibonacci number is-%d",x,list[x]);
	return 0;
	
	dynamic programming is applied when the problems are interdependent/top down approach
	
	
}
*/
long int list[100];

long int fibonacci(long int n){
	if(n<=1){
	  list[n]=n;
	  return n;
	}
	else{ 
		if(list[n]<0){
		list[n]=fibonacci(n-1)+fibonacci(n-2);
		}
	return list[n];
	}	 
}
int main(){
	long int x;
	printf("Input-");
	scanf("%ld",&x);
	for(int i=0;i<=x;i++)
	  list[i]=-1;
	  
		
	printf("%ldth fibonacci number is %ld",x,fibonacci(x));
	return 0;

}

