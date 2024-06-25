#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s;
ll calc_numsum(string s){
	ll ans=0;
	for(int i=0;i<s.size();i++) ans+=s[i]-'0';
	return ans;
}
int main(){
	cin>>s;
	ll sum=calc_numsum(s);
	ll ans=0;
	for(int i=0;i<s.size();i++){
		ans=(ans*10+s[i]-'0')%sum;
	}
	if(ans==0) cout<<"Yes";
	else cout<<"No";
	return 0;
}
