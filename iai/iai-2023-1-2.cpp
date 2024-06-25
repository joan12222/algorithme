#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='x') cout<<'a';
		else if(s[i]=='y') cout<<'b';
		else if(s[i]=='z') cout<<'c';
		else if(s[i]=='X') cout<<'A';
		else if(s[i]=='Y') cout<<'B';
		else if(s[i]=='Z') cout<<'C';
		else cout<<char(s[i]+3);
	}
	return 0;
}