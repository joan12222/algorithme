#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		if('a'<=s[i]&&s[i]<='z') s[i]+='A'-'a';
	}
	cout<<s;
	return 0;
}
