#include<iostream>
#include<cstdlib>
#include<time.h>
#include<cstring>
using namespace std;


int main(){
	/*string RE;
	cout << "Enter your RE:";
	cin >> RE;
	char arr[2];
	int in=0;
	for(int i=0;RE[i];i++)
		if(RE[i]=='^'){
			arr[in]=RE[i+1];
			in++;
		}
	*/	   
	int digits[]={0,1};
	int c=2;
	srand(time(0));
	int n;
	n=rand()%5+1;
	//int m=2*n;
	string input;
	
	
	  for(int i=0;i<n;i++)
	   input+=to_string(digits[0]);
	 for(int i=0;i<n;i++)
	   input+=to_string(digits[1]);
         
	cout << input<<endl;    
	int len=input.size();
	  
	int s=(rand()%(len-1));
	int e;
	for(int i=0;;i++){
  	   e=((rand()%len));
  	   if(e > s)
  	      break;
  	}   
	cout << s <<" "<< e<<endl;
	
	string x,y,z;
	for(int i=0;i<s;i++)
	   x+=input[i];
	for(int i=s;i<e;i++)
	   y+=input[i];
	for(int i=e;i<len;i++)
	   z+=input[i];
	
	cout << x<< " "<< y<< " "<< z<<endl;   
	
	n=rand()%5+1;
	
	for(int k=0;;k++){
	  for(int i=0;i<n;i++)
	     y+=y;
	  cout << y<<endl;
	  input=x+y+z;
	  cout << input <<endl;
	  len=input.size();
	  bool flag1=true;
	  bool flag2=true;
	
	  for(int i=0;i<len/2;i++)
		if(input[i]!=0){
			flag1=false;
		}
	  if(flag1==true){
	        for(int i=len/2;i<len;i++)
		  if(input[i]!=1){
			flag2=false;
			break;
		  } 
	  	if(flag1 && flag2)
	           cout <<"REGULAR"<<endl;	
	  	else{
	  	   cout << "NOT REGULAR"<<endl;  	    
	    	   break;
	  	}
	  	  		
	  }
	 else{ 
	    cout << "NOT REGULAR"<<endl;  	    
	    break;
	 }   
	}   
	return 0;
}

