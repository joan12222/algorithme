#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll INF=1e18;
ll a,b,c,x1,x2,yone,y2;
ll exgcd(ll a,ll b,ll &x0,ll &y0){
	if(b==0){
		x0=1;
		y0=0;
		return a;
	}
	ll s,t;
	ll d=exgcd(b,a%b,s,t);
	x0=t;
	y0=s-(a/b)*t;
	return d;
}
void solve(ll a,ll yone,ll y2,ll &x1,ll &x2){
	if(a==0){
		if(yone<=0&&y2>=0){
			x1=-INF;
			x2=INF;
		}else{
			x1=1;
			x2=-1;
		}
		return;
	}
	if(a<0){
		a=-a;
		ll t=y2;
		y2=-yone;
		yone=-t;
	}
	ll r2=y2%a;
	if(r2>0) r2+=a;
	y2-=r2;
	ll r1=yone%a;
	if(r1>0) yone+=a-r1;
	else yone+=(-r1);
	x1=yone/a;
	x2=y2/a;
}
int main(){
	cin>>a>>b>>c;
	ll x0,y0;
	ll d=exgcd(a,b,x0,y0);
	if(c%d!=0){
		cout<<"0";
		return 0;
	}
	a/=d;
	b/=d;
	c/=d;
	x0*=(-c);
	y0*=(-c);
	cin>>x1>>x2>>yone>>y2;
	ll x_lower,x_upper,y_lower,y_upper;
	solve(b,x1-x0,x2-x0,x_lower,x_upper);
	solve(-a,yone-y0,y2-y0,y_lower,y_upper);
	ll l=max(x_lower,y_lower);
	ll r=min(x_upper,y_upper);
	cout<<max(r-l+1,0LL);
	return 0;
}
