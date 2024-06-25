#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
int n,a[500005],b[500005];
ll suma,sumb,ans,op;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	for(int i=1;i<=n;i++){
		op=(op+suma*b[i]+sumb*a[i]+((i*a[i])%mod*b[i])%mod)%mod;
		suma=(suma+(i*a[i])%mod)%mod;
		sumb=(sumb+(i*b[i])%mod)%mod;
		ans=(ans+op)%mod;
	} 
	cout<<ans;
	return 0;
}
