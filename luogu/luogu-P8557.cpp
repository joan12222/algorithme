#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=998244353;
ll n,k;
ll quickpow(ll a,ll b){
	ll ans=1;
	for(;b;b>>=1){
		if(b&1) ans=ans*a%mod;
		a=a*a%mod;
	}
	return ans;
}
int main(){
	cin>>n>>k;
	cout<<quickpow(quickpow(2,k)-1,n);
	return 0;
}
