#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
int n,m,a[7005],pre[7005],f[7005][7005];
bitset<7005> bucket;
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++) cin>>a[i];
	pre[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) f[i][j]=pre[i-1]%mod;
		for(int j=1;j<=m;j++){
			if(i>a[j]) f[i][j]=((f[i][j]-pre[i-a[j]-1]+mod)%mod+f[i-a[j]-1][j])%mod;
		}
		for(int j=1;j<=m;j++) pre[i]=(pre[i]+f[i][j])%mod;
	}
	cout<<pre[n];
	return 0;
}
