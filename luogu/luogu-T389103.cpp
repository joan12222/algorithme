#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,mod;
int main(){
	cin>>a>>b>>mod;
	ll b1=b;
	ll ans=1,base=a;
	for(;b;b/=2){
		if(b%2==1) ans=(ans*base)%mod;
		base=(base*base)%mod;
	}
	cout<<a<<"^"<<b1<<" mod "<<mod<<"="<<ans;
	return 0;
}
