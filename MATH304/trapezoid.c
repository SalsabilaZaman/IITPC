#include<stdio.h>
#define F(x) (x*x+1)

int main(){
	double a=0.0,b=2.0;
	int N=10;
	double h=(b-a)/N;
	double x[N+1],y[N+1];
	for(int i=0;i<N+1;i++)
	    x[i]=a+i*h;
	for(int i=0;i<N+1;i++)
	    y[i]=F(x[i]);
	
	double sum_X=y[0]+y[N];
	double sum_I=0;
	for(int i=1;i<N;i++)
	        sum_I+=y[i];
	        
	double I=(h*(sum_X+(2*sum_I)))/2;
	printf("Trapezoidal Rule______\n\n");  	
	printf("Integral Value=%10.7lf\n",I);
	return 0;
}
