#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s;
ll ans=0;
bool check(char s){
	if('a'<=s&&s<='z') return true;
	if('A'<=s&&s<='Z') return true;
	if('0'<=s&&s<='9') return true;
	return false;
}
int main(){
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(check(s[i])) ans++;
	}
	cout<<ans;
	return 0;
}
