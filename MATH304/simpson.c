#include<stdio.h>
#define F(x) (x*x+1)

int main(){
	double I,a=0.0,b=2.0;
	int i,N=10;
	double h,sum_O=0,sum_E=0,sum_X;
	
	if(N%2!=0)
	   N++;
	   
	h=(b-a)/N;
	
	double x[N+1],y[N+1];
	
	for(i=0;i<N+1;i++)
	    x[i]=a+i*h;
	for(i=0;i<N+1;i++)
	    y[i]=F(x[i]);
	
	sum_X=y[0]+y[N];
	
	
	for(i=1;i<N;i++){
		if(i%2==0)
		   sum_E+=y[i];
		else
		  sum_O+=y[i];   
	}
	        
	I=(h*(sum_X+(4*sum_O)+(2*sum_E)))/3;
	
	
	printf("______Simpson Rule______\n\n");  	
	printf("Integral Value=%10.7lf\n",I);
	return 0;
}
