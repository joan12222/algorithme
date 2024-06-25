#include<bits/stdc++.h>
using namespace std;
int n,q,num[30];
string s;
int main(){
	cin>>n>>s>>q;
	for(int i=0;i<26;i++) num[i]=i;
	while(q--){
		char c,d;
		cin>>c>>d;
		for(int i=0;i<26;i++){
			if(num[i]==c-'a') num[i]=d-'a';
		}
	}
	for(int i=0;i<n;i++) cout<<char('a'+num[s[i]-'a']);
	return 0;
}
