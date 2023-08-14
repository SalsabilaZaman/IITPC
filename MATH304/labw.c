
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define EPS 10.0e-6
#define F(x) (x*x*x+4*x*x-5)


int main(){
	int n=100,i;
	double f=-5,l=5,c;
	if(F(f)*F(l)>0) exit(0);
	
	printf("  Iter	    a		   b		  c		  F(a)		  F(b)		  F(c)\n");
	printf("-----------------------------------------------------------------------------------------\n");
	
	c=(l-f)/6;
	for(i=0;i<6;i++){
		double a=f+i*c;
		double b=f+(i+1)*c;    	
		if(F(a)*F(b)>0)
		    continue;
		else{    
		for(int j=0;j<n;j++){
		double m=(a+b)/2; 
		//printf("%d	%lf	%lf	%lf	%lf	%lf	%lf\n",i,f,l,c,F(f),F(l),F(c));
		
		if(fabs(F(m))<EPS){
			printf("Root=%lf\n",m);
			break;
		}
		if(F(a)*F(m)>0)
		 a=m;
		else
		 b=m;
	      }	 
	}
	}	
	return 0;
}

/*
	h=(B-A)/6;
	a=A;
	for(int i=0;i<6;i++){
		b=a+h;
		bisection(a,b);
		a=b;
	}


*/
