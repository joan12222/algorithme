#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll a[4005];
bool is_prime(ll x){
	if(x==0||x==1) return false;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return false;
	}
	return true;
}
ll gcd(ll a,ll b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	ll cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(is_prime(__builtin_popcountll(a[i]^a[j]))) cnt++;
		}
	}
	if(cnt==0) cout<<"0";
	else cout<<cnt/gcd(cnt,1LL*n*(n-1)/2)<<" "<<1LL*n*(n-1)/2/gcd(cnt,1LL*n*(n-1)/2);
	return 0;
}
