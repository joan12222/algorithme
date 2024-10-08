#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e9+7;
ll n,a[1000005],ans;
int main(){
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) ans=(ans+i*(n-i+1)%mod*a[i]%mod)%mod;
	cout<<ans;
	return 0;
}
