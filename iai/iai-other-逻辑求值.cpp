#include<bits/stdc++.h>
using namespace std;
string s;
stack<int> st;
stack<string> st2;
int main(){
	//合取优先 
	while(cin>>s){
		st2.push(s);
		if(s=="true") st.push(1);
		else if(s=="false") st.push(0);
		else if(s=="and"){
			int op1=st.top();
			st.pop();
			cin>>s;
			int op2;
			if(s=="true") op2=1;
			else op2=0;
			if(op1==0||op2==0) st.push(0);
			else st.push(1);
		}else st.push(2);
	}
	while(st.size()>1){
		int num1=st.top();
		st.pop();
		st.pop();
		int num2=st.top();
		st.pop();
		if(num1==1||num2==1) st.push(1);
		else st.push(0);
	}
	if(st.top()==1) cout<<"true"<<endl;
	else cout<<"false"<<endl;
	//析取优先
	st.pop();
	while(!st2.empty()){
		s=st2.top();
		st2.pop();
		if(s=="true") st.push(1);
		else if(s=="false") st.push(0);
		else if(s=="or"){
			int op1=st.top();
			st.pop();
			s=st2.top();
			st2.pop();
			int op2;
			if(s=="true") op2=1;
			else op2=0;
			if(op1==1||op2==1) st.push(1);
			else st.push(0);
		}else st.push(2);
	}
	while(st.size()>1){
		int num1=st.top();
		st.pop();
		st.pop();
		int num2=st.top();
		st.pop();
		if(num1==0||num2==0) st.push(0);
		else st.push(1);
	}
	if(st.top()==1) cout<<"true"<<endl;
	else cout<<"false"<<endl;
	return 0;
}
