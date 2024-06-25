#include<bits/stdc++.h>
using namespace std;
stack<char> ch;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]=='('){
			ch.push(s[i]);
		}
		if(s[i]==')'){
			if(ch.empty()){
				printf("NO\n");
				return 0;
			}
			ch.pop();
		}
	}
	if(ch.empty()){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;	
}
