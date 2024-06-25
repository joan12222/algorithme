#include<bits/stdc++.h>
using namespace std;
int exp();
int term(){
	char c=cin.peek();
	if(c=='('){
		cin>>c;
		int res=exp();
		cin>>c;
		return res;
	}else{
		//c must be 0...9
		int num;
		cin>>num;
		return num;
	}
}
//exp=term+term+...
char peek(){
	while(!cin.eof()){
		char c=cin.peek();
		if(c=='(') return c;
		if(c==')') return c;
		if(c=='+') return c;
		if(c=='-') return c;
		if('0'<=c&&c<='9') return c;
		cin>>c;
		return ')';
	}
}
int exp(){
	int sum=term();
	while(peek()!=')'){
		char op;
		cin>>op;
		if(op=='+') sum+=term();
		else sum-=term();
	}
	return sum;
}
int main(){
	cout<<exp();
	return 0;
}
