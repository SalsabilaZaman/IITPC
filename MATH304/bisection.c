//bisection method

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define EPS 10.0e-6
#define F(x) (x*x*x+4*x*x-10)


int main(){
	int n=100,i;
	double first=1.25,last=1.5,c;
	if(F(first)*F(last)>0) exit(0);
	printf("  Iter	    a		   b		  c		  F(a)		  F(b)		  F(c)\n");
	printf("----------------------------------------------------------------------------------------------\n");
	for(i=1;i<n;i++){
		c=(first+last)/2;
		printf("%d	%lf	%lf	%lf	%lf	%lf	%lf\n",i,first,last,c,F(first),F(last),F(c));
		
		if(fabs(F(c))<EPS){
			printf("Root=%lf\n",c);
			exit(0);
		}
		if(F(first)*F(c)>0)
		 first=c;
		else
		 last=c;
		 
	}
	return 0;
}
//Step 1: Calculate the value of the function for the boundary values	
		//Suppose boundary is given [a,b] for the function f(x)
		//Calculate f(a) and f(b)
//Step 2: If f(a) and f(b) bears the opposite sign,then there lies atleast an unique solution of the function,go to Step 3.
          //Else there is no unique solution for the function in the given boundary,go to Step 7.
//Step 3: Calculate the middle point of the boundary[a,b],using this formula,(a+b)/2,assign it to a point x.
//Step 4: Check if f(x) equals to zero or it is smaller than the given tolerance value,if yes go to step 6.
	  //Else go to step 5.
//Step 5:Check if f(a) and f(x) bears the same sign,if yes,assign x to a.
	  //Else assign x to b. This is now the updated boundary.Go to Step 3.
//Step 6:Print the x,the rool value
//Step 7:Exit	  	            
		
