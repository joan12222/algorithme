#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
typedef long long ll;
ll al,bl,cl,dl,au,bu,cu,du,as,bs,cs,ds;
ll calc(ll x){
	if(x<0) return 0;
	return x*(x-1)/2%mod;
}
ll cnt(ll w,ll x,ll y,ll z){
	ll c=calc(w);
	c-=calc(w-x);
	c-=calc(w-y);
	c-=calc(w-z);
	c+=calc(w-x-y);
	c+=calc(w-y-z);
	c+=calc(w-x-z);
	c-=calc(w-x-y-z);
	return c%mod;
}
ll sum(ll low,ll high,ll base,ll x,ll y,ll z){
	ll s=0;
	for(int i=base;i<low;i++) s=(s+(high-low)*cnt(i-base,x,y,z))%mod;
	for(int i=low;i<high;i++) s=(s+(high-i)*cnt(i-base,x,y,z))%mod;
	return s;
}
int main(){
	cin>>al>>au>>bl>>bu>>cl>>cu>>dl>>du;
	al--;
	bl--;
	cl--;
	dl--;
	as=au-al;
	bs=bu-bl;
	cs=cu-cl;
	ds=du-dl;
	ll ans=ll(as*bs*cs%mod*ds);
	ans-=sum(al,au,bl+cl+dl,bs,cs,ds);
	ans-=sum(bl,bu,al+cl+dl,as,cs,ds);
	ans-=sum(cl,cu,al+bl+dl,as,bs,ds);
	ans-=sum(dl,du,al+bl+cl,as,bs,cs);
	cout<<(ans%mod+mod)%mod;
	return 0;
}
