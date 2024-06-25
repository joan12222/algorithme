#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,n,a,b;
pair<ll,ll> calc(ll n,ll m){
	if(n==0) return {0,0};
	ll cnt=1LL<<(2*n-2),len=1LL<<(n-1);
	ll div=m/cnt,res=m%cnt;
	pair<ll,ll> pos=calc(n-1,res);
	if(div==0) return {pos.second,pos.first};
	if(div==1) return {pos.first,pos.second+len};
	if(div==2) return {pos.first+len,pos.second+len};
	return {2*len-pos.second-1,len-pos.first-1};
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>a>>b;
		pair<ll,ll> p1,p2;
		p1=calc(n,a-1);
		p2=calc(n,b-1);
		ll chax=abs(p1.first-p2.first);
		ll chay=abs(p1.second-p2.second);
		double ans=sqrt(chax*chax+chay*chay)*10;
		//cout<<ans<<" ";
		cout<<(ll)floor(ans+0.5)<<endl;
	}
	return 0;
}
