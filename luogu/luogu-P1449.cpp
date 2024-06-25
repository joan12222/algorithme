#include<bits/stdc++.h>
using namespace std;
string s;
int num,x,y;
stack<int> st;
int main(){
	cin>>s;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]!='+'&&s[i]!='-'&&s[i]!='*'&&s[i]!='/'&&s[i]!='.') num=num*10+s[i]-'0';
		else if(s[i]=='.'){
			st.push(num);
			num=0;
		}else{
			x=st.top();
			st.pop();
			y=st.top();
			st.pop();
			if(s[i]=='+') st.push(x+y);
			if(s[i]=='-') st.push(y-x);
			if(s[i]=='*') st.push(x*y);
			if(s[i]=='/') st.push(y/x);
		}
	}
	cout<<st.top();
	return 0;
}
