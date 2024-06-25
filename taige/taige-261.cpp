#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a[100005],f[100005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	f[0]=0;
	for(int i=1;i<=n;i++){
		f[i]=max(a[i],f[i-1]+a[i]);
	}
	ll maxx=-1;
	for(int i=1;i<=n;i++) maxx=max(f[i],maxx);
	cout<<maxx;
	return 0;
}
