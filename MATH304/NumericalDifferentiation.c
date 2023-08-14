#include<stdio.h>
#define f(x) (x*x+1)
#define g(x) 2*x
int main(){
	double a=0,b=2.0;
	int n=10;
	double h=(b-a)/n;
	
	double x[n+1],y[n+1][3];
	x[0]=a;
	
	for(int i=0;i<n+1;i++){
		 x[i]=x[0]+i*h;
		 y[i][0]=f(x[i]);
		 y[i][2]=g((x[i]));
	}	 
	
	
	for(int i=0;i<n+1;i++){
		 if(i==0)
		    y[i][1]=(y[i+1][0]-y[i][0])/(x[i+1]-x[i]);
		else if(i==n-1)
		     y[i][1]=(y[i][0]-y[i-1][0])/(x[i]-x[i-1]);
		else
		    y[i][1]=(y[i+1][0]-y[i-1][0])/(x[i+1]-x[i-1]);
	}
	
	printf("x,	F(x),		F'(x),		diff\n\n");
	for(int i=0;i<n+1;i++)
	   printf("\n %lf,	%lf,	%lf,	%lf",x[i],y[i][0],y[i][2],y[i][1]);
	
	return 0;
}
