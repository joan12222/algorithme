#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
int n,k;
ll f[1005][10005];
int main(){
	cin>>n>>k;
	f[1][0]=1;
	for(int i=2;i<=n;i++){
		for(int j=0;j<=k;j++){
			if(j<i) f[i][j]=(f[i-1][j]+f[i][j-1])%mod;
			else f[i][j]=(f[i-1][j]+f[i][j-1]-f[i-1][j-i]+mod)%mod;
		}
	}
	cout<<f[n][k];
	return 0;
}
