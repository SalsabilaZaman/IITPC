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
	for(i=1;i<n;i++){
		c=(f+l)/2;
		printf("%d	%lf	%lf	%lf	%lf	%lf	%lf\n",i,f,l,c,F(f),F(l),F(c));
		
		if(fabs(F(c))<EPS){
			printf("Root=%lf\n",c);
		}
		if(F(f)*F(c)>0){
			 f=c;
		 	for(int j=0;j<10;j++){
		 		c=(f+l)/2;
		 	printf("%d	%lf	%lf	%lf	%lf	%lf	%lf\n",i,f,l,c,F(f),F(l),F(c));
		
			if(fabs(F(c))<EPS)
				printf("Root=%lf\n",c);
		
			if(F(f)*F(c)>0)
		 		f=c;
			else
		 		l=c;
			}
		} 
		else{
		 	l=c;
			for(int j=0;j<10;j++){ 
		 	c=(f+l)/2;
			printf("%d	%lf	%lf	%lf	%lf	%lf	%lf\n",i,f,l,c,F(f),F(l),F(c));
		
			if(fabs(F(c))<EPS){
				printf("Root=%lf\n",c);
			}
		    	if(F(f)*F(c)>0)
		   		f=c;
			else
		 		l=c;
			
		}
}		 
}
	return 0;
}
