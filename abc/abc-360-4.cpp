#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,t,idx0[200005],idx1[200005],a[200005],k0,k1;
ll ans;
string s;
int main(){
	cin>>n>>t>>s;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(s[i-1]=='0') idx0[++k0]=a[i];
		else idx1[++k1]=a[i];
	}
	sort(idx0+1,idx0+k0+1);
	sort(idx1+1,idx1+k1+1);
	for(int i=1;i<=k1;i++){
		ll l=lower_bound(idx0+1,idx0+k0+1,idx1[i])-idx0-1;
		ll r=upper_bound(idx0+1,idx0+k0+1,idx1[i]+2*t)-idx0-2;
		ans+=r-l+1;
	}
	cout<<ans;
	return 0;
}
