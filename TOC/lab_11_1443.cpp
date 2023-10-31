#include<iostream>
#include<cstring>
#include<vector>
using namespace std;


string production[3];
char terminals[2]={'a','b'};
char non_terminal='S';



void leftmostDerivation(string input,string prod){
	vector<string> transitions;
	string curr = "S";
	transitions.push_back(curr);
	curr=prod;
	transitions.push_back(curr);
	int ind=1;
	while(ind<input.size()-1){
		if(input.find("b")!=-1){
			while(ind < input.find("b")-1){	
				curr.erase(curr.begin()+curr.find("S"));
				curr+="aS";
				transitions.push_back(curr);
				ind++;
			}
			//curr.erase(curr.begin()+curr.find("S"));
			
		}		
		else{
			curr.erase(curr.begin()+curr.find("S"));
				curr+="aS";
				transitions.push_back(curr);
				ind++;
		}
		curr.erase(curr.begin()+curr.find("S"));
	}
	
	 for (auto i :transitions)
            cout << i << endl;
	

}
int main(){
	production[0]="aS";
	production[1]="aSbS";
	production[2]="E";
	string input;
	cout <<"Enter your string:";
	cin >> input;
	
	int len=input.size();
	int i=0;
	if(input.find("b")==-1)
		leftmostDerivation(input,production[0]);
	else{
		for(int j=0;j<3;j++)
			if(input[i]==production[j][i])
				leftmostDerivation(input,production[j]);			
	
	}	
	
	
	
	

	return 0;
}
