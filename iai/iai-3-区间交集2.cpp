#include<bits/stdc++.h>
using namespace std;
const int maxn=100001;
const long long mod=1000000007;
long long f[maxn],g[maxn];
int main(){
	int n;
	cin>>n;
	f[0]=1;
	g[0]=1;
	f[1]=2;
	g[1]=3;
	for(int i=2;i<=n;i++){
		f[i]=(f[i-2]+2*g[i-1])%mod;
		g[i]=(f[i]+g[i-1])%mod;
	}
	cout<<f[n];
	return 0;
}
