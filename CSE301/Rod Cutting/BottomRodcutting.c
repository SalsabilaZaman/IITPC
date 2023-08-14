// Online C compiler to run C program online
#include <stdio.h>


int max(int x,int y){
	if(x>y)
	   return x;
	else
	   return y;	
}

void rodcutting(int arr1[][2],int profit[],int n,int cutsize[]){
    int i,j;
    profit[0]=0;
	for(i=1;i<=n;i++){
		int q=-1;
		for(j=1;j<=i;j++){	
		  if(q<arr1[j][1]+profit[i-j]){
	 	   q=arr1[j][1]+profit[i-j];
	 	   cutsize[i]=j;
	 	  } 
	 	  profit[i]=q;
	 	} 	
	 	
	} 		
			

	printf("Total profit-%d\n",profit[n]);	
    
}

int main(){
	int n,arr[11][2];
	for(int i=0;i<11;i++)
	    scanf("%d %d",&arr[i][0],&arr[i][1]);
	printf("Enter length of your rod:");
	scanf("%d",&n);
	int profit[n+1],cutsize[n+1];
	
	for(int i=0;i<n+1;i++){
	  profit[i]=-1;
	  cutsize[i]=-1;
	}  
	
	  
	rodcutting(arr,profit,n,cutsize);
	for(int i=n;i>0;){
		printf("%d ",cutsize[i]);
		i=i-cutsize[i];
	}
	return 0;
}








/*
0 0
1 1
2 5
3 8
4 9
5 10
6 12
7 17
8 20
9 24
10 30

*/
