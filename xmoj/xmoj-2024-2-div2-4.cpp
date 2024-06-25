#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll m,k,ans;
bool is_prime(ll x){
	for(ll i=2;i<=sqrt(x);i++){
		if(x%i==0) return false;
	}
	return true;
}
ll dfs(ll num){
	if(num==1) return 1;
	if(is_prime(num)) return 2;
	ll res=1;
	for(ll i=m/2;i>=1;i--){
		if(m%i==0&&i%k!=0) res+=dfs(i);
	}
	return res;
}
int main(){
	//freopen("divisor.in","r",stdin);
	//freopen("divisor.out","w",stdout);
	cin>>m>>k;
	if(k==1){
		cout<<"0";
		return 0;
	}
	for(ll i=m;i>=1;i--){
		if(i%k!=0) ans+=dfs(i);
	}
	cout<<ans;
	return 0;
}
