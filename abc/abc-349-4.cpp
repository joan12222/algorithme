#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll l,r,m;
vector<ll> ansl,ansr;/*
ll highbit(ll x){
	x|=x>>1;
	x|=x>>2;
	x|=x>>4;
	x|=x>>8;
	x|=x>>16;
	x|=x>>32;
	return (x+1)>>1;
}*/
ll lowbit(ll x) {return x&(-x);}
bool flag=false;
void dfs(ll now,ll k){
	if(now>=r) return;
	if(now==r-1){
		flag=true;
		cout<<k+1<<endl;
		return;
	}
	vector<ll> pow2;
	ll num=1;
	while(num<=now){
		if(now%num==0) pow2.push_back(num);
		num*=2;
	}
	//cout<<k<<" "<<now<<endl;
	sort(pow2.begin(),pow2.end(),greater<int>());
	//for(auto x:pow2) cout<<x<<" ";
	//cout<<endl;
	for(auto x:pow2){
		ansl.push_back(now);
		ansr.push_back(now+x);
		dfs(now+x,k+1);
		if(flag) return;
		ansl.erase(ansl.end()-1);
		ansr.erase(ansr.end()-1);
	}
}
int main(){
	cin>>l>>r;
	//cout<<l<<" "<<r<<endl;
	dfs(l,0);/*
	while(now!=r-1){
		m++;
		vector<ll> pow2;
		while(now!=0){
			pow2.push_back(lowbit(now));
			now-=lowbit(now);
		}
	}
	cout<<m<<endl;*/
	for(int i=0;i<ansl.size();i++) cout<<ansl[i]<<" "<<ansr[i]<<endl;
	cout<<ansr[ansr.size()-1]<<" "<<r;
	return 0;
}
