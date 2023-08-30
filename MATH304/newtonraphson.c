#include<stdio.h>
#include<math.h>
#define f(x) (x*x*x+4*x*x-10)
#define df(x) (3*x*x+8*x)
#define EPS 10e-6

int main(){
	double x0=1.5;
	int i,n=100;
	printf("Iterator	x0		x1		f(x0)		df(x0)			f(x1)	\n");
	for(i=0;i<100;i++){
		double x1=x0-(f(x0)/df(x0));
		printf("%d		%lf	%lf	%lf	%lf		%lf\n",i+1,x0,x1,f(x0),df(x0),f(x1));
		if(fabs(f(x1))<=EPS){
			printf("Approximate Root=    %lf\n",x1);
			break;
		}
		else
		   x0=x1;
	}
	
	return 0;
}

