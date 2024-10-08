#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e9+7;
ll t,n,m;
ll quick_pow(ll a,ll b){
	ll ans=1;
	while(b){
		if(b%2==1) ans=ans*a%mod;
		a=a*a%mod;
		b/=2;
	}
	return ans;
}
int main(){
	freopen("stone.in","r",stdin);
	freopen("stone.out","w",stdout);
	cin>>t;
	while(t--){
		cin>>n>>m;
		if(n==1) cout<<m<<endl;
		else cout<<quick_pow(m-1,n)+quick_pow(-1,n)*(m-1)<<endl;
	}
	return 0;
}
