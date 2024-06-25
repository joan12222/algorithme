#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=998244353;
ll n,cnt[200005],a[200005],qpow[15];
ll ans;
ll sz(ll x){
	return log10(x)+1;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	qpow[0]=1;
	for(int i=1;i<=14;i++) qpow[i]=qpow[i-1]*10%mod;
	for(int i=n;i>=1;i--){
		ans=(ans+(i-1)*a[i]%mod)%mod;
		for(int j=1;j<=10;j++) ans=(ans+cnt[j]*qpow[j]%mod*a[i]%mod)%mod;
		cnt[sz(a[i])]++;
	}
	cout<<ans;
	return 0;
}
