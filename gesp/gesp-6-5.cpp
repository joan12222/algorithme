#include<bits/stdc++.h>
using namespace std;
const int nn=200005;
const int mod=1000000007;
int n,a,b,c,f[400005];
int main(){
	cin>>n>>a>>b>>c;
	f[nn+n]=1;
	for(int i=n;i>c;i--){
		f[nn+i-a]=(f[nn+i-a]+f[nn+i])%mod;
		f[nn+i-b]=(f[nn+i-b]+f[nn+i])%mod;
	}
	int ans=0;
	for(int i=0;i<=nn+c;i++) ans=(ans+f[i])%mod;
	cout<<ans;
	return 0;
}
