#include<stdio.h>
#include<string.h>
char arr[6][6];

int findMin(int x, int y, int z){
  if(x <= y && x <= z)
    return x;
  else if(y <=x && y <= z)
    return y;
  else
    return z;
}


void printED(char *array1,int i,int j){
    if(i==0 || j==0)
       return ;
    
    if(arr[i][j]=='S'){
      printf("%c ",array1[i]);
      printED(array1,i-1,j-1);
      //printf("%c ",array1[i]);
    }
    else if(arr[i][j]=='D'){
      printED(array1,i-1,j);
      printf("%c ",array1[i]);
    }  	
    else if(arr[i][j]=='I'){
      printED(array1,i,j-1);         
	printf("%c ",array1[i]);
    }
    else
       printf("%c ",array1[i]);
}
int main(){
	
	char arr1[15]=" Heater";
	char arr2[15]=" Speak";
	int a,b,i,j;
	a=strlen(arr1);
	b=strlen(arr2);
	
	int c[a][b];
	
	for(i=0;i<a;i++)
	  for(j=0;j<b;j++){
	    if(i==0 && j==0)
	  	 arr[i][j]='0';
	    else if(i==0)
	  	  arr[i][j]='I'; 	  
	    else if(j==0)
	  	   arr[i][j]='D';
	    else
	         arr[i][j]='N';
	  }
	         
	for(i=0;i<a;i++)
	  for(j=0;j<b;j++){
	    if(i==0)
	       c[i][j]=i;
	    
	    else    
	      c[i][j]=j;
	   
	  }    
	      
	for(i=1;i<=a;i++)
	  for(j=1;j<=b;j++){
	  	if(arr1[i]!=arr2[j]){
	  	  int x=c[i-1][j-1];
	  	  int y=c[i-1][j];
	  	  int z=c[i][j-1];
	  	  int min=findMin(x,y,z);
	  	  c[i][j]=min+1;
	  	  if(min==x)
	  	     arr[i][j]='S';
	  	  else if(min==y)
	  	     arr[i][j]='D';
	  	  else
	  	     arr[i][j]='I';   
	        }
	        
	       else{
	          c[i][j]=c[i-1][j-1];	         
	  	  arr[i][j]='N';
	  	}
	  }
	     
	        
	//printf("%d %d",a,b);
	
/*	for(i=0;i<a;i++){
	  for(j=0;j<b;j++){
	  	if(i==0 && j==0)
	  	   printf("0   ");
	  	else if(i==0)
	  	   printf("I,%d ",c[i][j]);
	  	else if(j==0)
	  	   printf("D,%d ",c[i][j]);     
		else
		   printf("%d,%d ",arr[i][j],c[i][j]);  	
	  
	  }
	  printf("\n");
	}
*/	
	printED(arr1,a,b);
		  
	printf("\n\nDistance-%d",c[a][b]);
	return 0;
}

