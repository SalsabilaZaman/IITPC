#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define EPS 10.0e-6
#define f(x) (x*x*x+4*x*x-10)


int main(){
	int n=100,i;
	double x0=1.5,x1=2.0,x2;
	
	printf("  Iter	    x0		   x1		  x2		  F(x0)		  F(x1)		  	F(x2)\n");
	printf("-----------------------------------------------------------------------------------------\n");
	for(i=1;i<n;i++){
		x2=((x0*f(x1))-(x1*f(x0)))/(f(x1)-f(x0));
		printf("%d	%lf	%lf	%lf	%lf	%lf	   %lf\n",i,x0,x1,x2,f(x0),f(x1),f(x2));
		
		if(fabs(f(x2))<EPS){
			printf("Root=%lf\n",x2);
			exit(0);
		}
		else{
			x0=x1;
			x1=x2;
		}
		 
	}
	return 0;
}
