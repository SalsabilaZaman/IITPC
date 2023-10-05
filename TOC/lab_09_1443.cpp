#include<iostream>
#include<cstring>
#define N 10
using namespace std;
int n,len;
string INPUT;
char V[N];
string production[N][5];

void inputCFG(){
	n=5;
	V[0]='P';
	production[0][0]="e";
	production[0][1]="0";
	production[0][2]="1";
	production[0][3]="0P0";
	production[0][4]="1P1";

}
bool checkCFG(string input){
	if(input.size()==0)
		return true;
	else if(input.size()==1){
		//cout << input <<endl;
		if(input==production[0][1] || input==production[0][2])
		   return true;
	
	}	
	else{	
		if (input[0] == '0') {
            		if (input[input.size() - 1] == '0') {
            			cout <<"P=";
            			if(input.substr(1, input.size()- 2)=="")
            			   cout <<"E"<<endl;
            			else 
            			   cout <<input.substr(1, input.size()- 2)<<endl;   
               		 return checkCFG(input.substr(1, input.size()- 2));
            		}
        	}
        	if (input[0] == '1') {
            		if (input[input.size() - 1] == '1') {
            			cout <<"P=";
            			if(input.substr(1, input.size()- 2)=="")
            			   cout <<"E"<<endl;
            			else 
            			   cout <<input.substr(1, input.size()- 2)<<endl;
                		return checkCFG(input.substr(1, input.size() - 2));
            		}
        	}
        
        return false;
	}
	return false;	
}
int main(){
	bool accepted=false;
	
	inputCFG();
	cout << "Enter String=";
	getline(cin,INPUT);
	len=INPUT.size();
	
	
	accepted=checkCFG(INPUT);
							     

	if(accepted)
	   cout << "VALID";
	else
	   cout << "NOT VALID";

	return 0;
}
