#include<bits/stdc++.h>
using namespace std;

/*void pda(string input){
	stack<char> stack;
	for(int i=0;i<input.size();i++){
		if(i<(input.size()/2))
			stack.push(input[i]);
			
	}

}
*/
void PrintStack(stack<string> s){
 
    if (s.empty()) 
        return;
     
    string x = s.top();
 
    s.pop();
    PrintStack(s);
 
    cout << x << " ";
 

    s.push(x);
}

bool pda(string input){
	stack<string> st;
	int i=0;
	string s="";
	//st.push("Z");
	if(input[0]!='a')
		return false;
	
	while(input[i]!='b'){
		cout <<input[i]<<","<<"E"<<"->"<<input[i]<<endl;
		st.push(s+input[i]);
		cout <<"Stack After Push:";
		PrintStack(st);
		cout<<endl;
		i++;
	}
	
	while(input[i]=='b' ){
	   if(st.top()=="a"){
	   	cout <<input[i]<<","<<st.top()<<"->"<<st.top()<<input[i]<<endl;
		string top=st.top();
		st.pop();
	   	st.push(top+(s+input[i]));
		cout <<"Stack After:";
		PrintStack(st);
		cout<<endl;
		i++;
	   }
	       
	    
	    else{	
		cout <<input[i]<<","<<st.top()<<"->"<<"E"<<endl;
		st.pop();
		cout <<"Stack After Pop:";
		PrintStack(st);
		cout <<endl;
	    	i++;
	    }	
		//i++;
	}
	
	//st.pop();
	//cout <<"Stack After Pop:";
	//	PrintStack(st);
	//	cout <<endl;
	if(st.empty() && i==input.size())
		return true;
	else
		return false;	
}
int main(){
	string input;
	cout <<"Input:";
	cin >> input;
	
	if(pda(input))
		cout <<"String accepted!";
	else
		cout <<"String Not accepted!";	
	
	return 0;
}
