#include<bits/stdc++.h>
using namespace std;
#define ll long long
string a,b,t;
ll l=0,r=2e9+1;
bool check(ll x){
	ll rm=0,tt;
	for(int i=b.size()-1;i>=0;i--){
		tt=b[i]*x+rm;
		t[i]=tt%10;
		rm=tt/10;
	}
	if(rm) return false;
	return t<=a;
}
int main(){
	cin>>a>>b;
	if(a.size()<b.size()){
		cout<<"0";
		return 0;
	}
	for(int i=a.size()-b.size();i>=1;i--) b='0'+b;
	while(l<r){
		ll mid=(l+r)/2;
		if(check(mid)) l=mid+1;
		else r=mid;
	}
	cout<<r-1;
	return 0;
}
