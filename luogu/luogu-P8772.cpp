#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[200005];
ll pre[200005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pre[i]=pre[i-1]+a[i];
	}
	ll ans=0;
	for(int i=1;i<n;i++){
		ans+=a[i]*(pre[n]-pre[i]);
	}
	cout<<ans;
	return 0;
}
