#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s;
ll n;
int main(){
	cin>>s>>n;
	reverse(s.begin(),s.end());
	while(s.size()<60) s.push_back('0');
	int diff=-1;
	for(int i=0;i<60;i++){
		if(s[i]!='?'&&s[i]-'0'!=(n>>i&1)) diff=i;
	}
	if(diff==-1){
		cout<<n;
		return 0;
	}
	for(int i=diff;i<60;i++){
		if(s[i]=='1'||(n>>i&1)==0) continue;
		s[i]='0';
		for(int j=0;j<i;j++){
			if(s[j]=='?') s[j]='1';
		}
		for(int j=i+1;j<60;j++) s[j]=(n>>j&1)+'0';
		ll ans=0;
		for(int j=59;j>=0;j--) ans=ans*2+s[j]-'0';
		cout<<ans;
		return 0;
	}
	cout<<"-1";
	return 0;
}
