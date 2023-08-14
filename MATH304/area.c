#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define EPS 10.0e-6
#define f(x) (sqrt(x))
#define g(x) (x*x)
#define F(x) (f(x)-g(x))

double bisection(){
	int n=100,i;
	double f=0.5,l=1.25,c;
	
	if(F(f)*F(l)>0) exit(0);
	
	for(i=1;i<n;i++){
		c=(f+l)/2;
		
		if(fabs(F(c))<EPS){
			return c;
		}
		if(F(f)*F(c)>0)
		 f=c;
		else
		 l=c;
	}
	return 0;
}	


int main(){
	double a=0,b,h,I1,I2,sum_O=0,sum_E=0,sum_X;
	int i,N=10;
	b=bisection();
		
	if(N%2!=0)
	   N++;
	   
	h=(b-a)/N;
	
	double x[N+1],y[N+1];
	
	for(i=0;i<N+1;i++)
	    x[i]=a+i*h;
	for(i=0;i<N+1;i++)
	    y[i]=f(x[i]);
	
	sum_X=y[0]+y[N];
	
	
	for(i=1;i<N;i++){
		if(i%2==0)
		   sum_E+=y[i];
		else
		  sum_O+=y[i];   
	}
	        
	I1=(h*(sum_X+(4*sum_O)+(2*sum_E)))/3;
	
	for(i=0;i<N+1;i++)
	    x[i]=a+i*h;
	for(i=0;i<N+1;i++)
	    y[i]=g(x[i]);
	
	sum_X=y[0]+y[N];
	
	
	for(i=1;i<N;i++){
		if(i%2==0)
		   sum_E+=y[i];
		else
		  sum_O+=y[i];   
	}
	        
	I2=(h*(sum_X+(4*sum_O)+(2*sum_E)))/3;
	
	printf("Area_\n\n");  	
	printf("Value=%lf\n",fabs(I1-I2));
	return 0;


}
