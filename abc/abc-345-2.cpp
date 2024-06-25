#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s;
ll num,buck[30];
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++) buck[s[i]-'a'+1]++;
	for(int i=1;i<=26;i++){
		if(buck[i]>1) num+=buck[i]*(buck[i]-1)/2;
	}
	ll ans=(ll)(s.size())*(s.size()-1)/2-num;
	if(num==0) cout<<ans;
	else cout<<ans+1;
	return 0;
}
/*
aabc
baac

*/
