#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

/*void pda(string input){
	stack<char> stack;
	for(int i=0;i<input.size();i++){
		if(i<(input.size()/2))
			stack.push(input[i]);
			
	}

}
*/
void PrintStack(stack<char> s){
 
    if (s.empty()) 
        return;
     
    char x = s.top();
 
    s.pop();
    PrintStack(s);
 
    cout << x << " ";
 

    s.push(x);
}

bool pda(string input){
	stack<char> st;
	int i=0;
	if(input[0]!='0')
		return false;
	while(input[i]!='1'){
		st.push(input[i]);
		cout <<"Stack After Push:";
		PrintStack(st);
		cout<<endl;
		i++;
	}
	
	while(input[i]=='1' ){
		st.pop();
		cout <<"Stack After Pop:";
		PrintStack(st);
		cout <<endl;
		i++;
	}

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
